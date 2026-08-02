; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __watcallStack crt_unknown_c_FUN_00571ef0(void *buffer)
;
; Parameters:
; void *           Stack[0x4]:4   buffer
;
; XREF[3]:
;   crt_iostream.cpp_ios_freeBufferChain_FUN_00570410 at 00570421
;   crt_iostream.cpp_setBuffer_FUN_00571df8 at 00571e37
;   crt_iostream.cpp_streambuf_destructor_FUN_00571d9f at 00571dbb
;
; Called Functions:
;   crt_unknown.c_FUN_005638d0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00571ef0
        ;   Label: crt_unknown.c_FUN_00571ef0
    PUSH EDX                            ; 00571ef4
    CALL crt_unknown.c_FUN_005638d0     ; 00571ef5
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005638d0()
    ADD ESP,0x4                         ; 00571efa
    RET                                 ; 00571efd

