; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_dosio_cpp_FUN_00478e20(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[7]:
;   engine_dosio.cpp_FUN_00479180 at 004791a7
;   engine_dosio.cpp_getFileSize_FUN_00478fb0 at 00478fcb
;   engine_dosio.cpp_reopenFileStream_FUN_00479240 at 00479280
;   engine_pod.cpp_CPod_locateFile_FUN_0053cec0 at 0053cee8
;   engine_pod.cpp_FUN_0053b250 at 0053b2a5
;   engine_texture.cpp_CTextureCache_loadTexture_FUN_005967a0 at 00596829
;   support_trstream.cpp_CInStreamFile_openInDirectory_FUN_005a0fd0 at 005a1003
;
; Referenced Globals:
;   void* PTR_engine_dosio.cpp_getRelativeFilePath_FUN_00478dc0_00612508 = 00478dc0
;
; Called Functions:
;   engine_dosio.cpp_getRelativeFilePath_FUN_00478dc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00478e20
        ;   Label: engine_dosio.cpp_FUN_00478e20
    MOV EDX,dword ptr [ESP + 0x10]      ; 00478e21
    PUSH EDX                            ; 00478e25
    MOV ECX,dword ptr [ESP + 0x10]      ; 00478e26
    PUSH ECX                            ; 00478e2a
    MOV EBX,dword ptr [ESP + 0x10]      ; 00478e2b
    PUSH EBX                            ; 00478e2f
    CALL dword ptr [0x00612508]         ; 00478e30 | PTR_engine_dosio.cpp_getRelativeFilePath_FUN_00478dc0_00612508
    ADD ESP,0xc                         ; 00478e36
    POP EBX                             ; 00478e39
    RET                                 ; 00478e3a

