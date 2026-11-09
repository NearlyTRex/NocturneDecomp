; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int unkaddr_004a76f0_cpp_FUN_004a83a0(int param_1)
;
;
; XREF[4]:
;   core_fldnotes.cpp_PageResource_Bitmap_dtor_FUN_004a8710 at 004a8740
;   core_fldnotes.cpp_PageResource_Text_dtor_FUN_004a8510 at 004a8526
;   core_fldnotes.cpp_PageResource_TwanaEntry_dtor_FUN_004a8980 at 004a89bf
;   unkafter_fldnotes.cpp_PageResource_Map_dtor_FUN_004ad3c0 at 004ad3cf
;
; Referenced Globals:
;   void* PTR_unkaddr_004a76f0.cpp_FUN_004a83a0_005e0284 = 004a83a0
;
; Called Functions:
;   crt_unknown.c_FUN_005a3770
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a83a0
        ;   Label: unkaddr_004a76f0.cpp_FUN_004a83a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a83a1
    MOV EDX,dword ptr [EBX + 0x10]      ; 004a83a5
    MOV dword ptr [EBX + 0x14],0x5e0284 ; 004a83a8 | PTR_unkaddr_004a76f0.cpp_FUN_004a83a0_005e0284
    TEST EDX,EDX                        ; 004a83af
    JNZ 0x004a83b7                      ; 004a83b1
        ;   XREF to: 004a83b7 (CONDITIONAL_JUMP)  ; LAB_004a83b7
    MOV EAX,EBX                         ; 004a83b3
    POP EBX                             ; 004a83b5
    RET                                 ; 004a83b6
    PUSH EDX                            ; 004a83b7
        ;   Label: LAB_004a83b7
    CALL crt_unknown.c_FUN_005a3770     ; 004a83b8
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    ADD ESP,0x4                         ; 004a83bd
    MOV dword ptr [EBX + 0x10],0x0      ; 004a83c0
    MOV EAX,EBX                         ; 004a83c7
    POP EBX                             ; 004a83c9
    RET                                 ; 004a83ca

