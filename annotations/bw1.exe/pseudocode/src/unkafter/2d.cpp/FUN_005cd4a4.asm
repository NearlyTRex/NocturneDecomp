; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_2d_cpp_FUN_005cd4a4(void)
;
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005c50f8_0062663c = 005c50f8
;   void* PTR_crt_unknown.c_FUN_005c50f8_00626640 = 005c50f8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cd4a4
        ;   Label: unkafter_2d.cpp_FUN_005cd4a4
    MOV EDX,0x5cd438                    ; 005cd4a5
    MOV EBX,0x5cd47c                    ; 005cd4aa
    MOV dword ptr [0x0062663c],EDX      ; 005cd4af | PTR_crt_unknown.c_FUN_005c50f8_0062663c
    MOV dword ptr [0x00626640],EBX      ; 005cd4b5 | PTR_crt_unknown.c_FUN_005c50f8_00626640
    POP EBX                             ; 005cd4bb
    RET                                 ; 005cd4bc

