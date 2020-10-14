
#include <android_native_app_glue.h>

void Android_handle_cmd(android_app *app, int32_t cmd) {
    switch (cmd) {
        case APP_CMD_INIT_WINDOW:
            // call sample setup here
            // sample_main(0, nullptr);
          break;
    }
}


void android_main(struct android_app *app)
{
    app->onAppCmd = Android_handle_cmd;

    while(!app->destroyRequested)
    {
        Android_process_command();
    }
}
