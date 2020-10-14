
add_library(glsdf SHARED
   ${ANDROID_NDK}/sources/android/native_app_glue/android_native_app_glue.c
   glsdf.cpp
)

target_include_directories(glsdf PUBLIC
   ${ANDROID_NDK}/sources/android/native_app_glue/
)

target_link_libraries(glsdf
   android
   log
)
