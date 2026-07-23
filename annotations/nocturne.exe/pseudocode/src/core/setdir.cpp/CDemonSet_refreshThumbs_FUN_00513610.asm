; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setdir_cpp_CDemonSet_refreshThumbs_FUN_00513610(undefined4 *param_1,undefined4 param_2)
;
;
; XREF[1]:
;   core_set.cpp_CDemonSet_load_FUN_00506f10 at 005078e9
;
; Referenced Globals:
;   TerminatedCString s_rb_00590c05
;   TerminatedCString s_data_00590c08
;
; Called Functions:
;   crt_stdio.c_fclose_FUN_00563380
;   crt_stdio.c_fread_FUN_005636d0
;   engine_dosio.cpp_getFile_FUN_00456a60
;   FUN_00513670
;   FUN_00513720
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00513610
        ;   Label: core_setdir.cpp_CDemonSet_refreshThumbs_FUN_00513610
    PUSH ESI                            ; 00513611
    MOV ESI,dword ptr [ESP + 0xc]       ; 00513612
    PUSH 0x590c05                       ; 00513616 | = "rb"
    MOV EDX,dword ptr [ESP + 0x14]      ; 0051361b
    PUSH EDX                            ; 0051361f
    PUSH 0x590c08                       ; 00513620 | = "data"
    CALL engine_dosio.cpp_getFile_FUN_00456a60 ; 00513625
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_getFile_FUN_00456a60()
    MOV EBX,EAX                         ; 0051362a
    ADD ESP,0xc                         ; 0051362c
    TEST EAX,EAX                        ; 0051362f
    JNZ 0x0051364d                      ; 00513631
        ;   XREF to: 0051364d (CONDITIONAL_JUMP)  ; LAB_0051364d
    PUSH ESI                            ; 00513633
    CALL FUN_00513720                   ; 00513634
        ;   XREF to: 00513720 (UNCONDITIONAL_CALL)  ; undefined FUN_00513720()
    ADD ESP,0x4                         ; 00513639
    MOV EBX,dword ptr [ESP + 0x10]      ; 0051363c
    PUSH EBX                            ; 00513640
    PUSH ESI                            ; 00513641
    CALL FUN_00513670                   ; 00513642
        ;   XREF to: 00513670 (UNCONDITIONAL_CALL)  ; undefined FUN_00513670()
    ADD ESP,0x8                         ; 00513647
    POP ESI                             ; 0051364a
    POP EBX                             ; 0051364b
    RET                                 ; 0051364c
    PUSH EAX                            ; 0051364d
        ;   Label: LAB_0051364d
    MOV ECX,dword ptr [ESI]             ; 0051364e
    PUSH ECX                            ; 00513650
    PUSH 0x3000                         ; 00513651
    PUSH 0x20875f8                      ; 00513656
    CALL crt_stdio.c_fread_FUN_005636d0 ; 0051365b
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005636d0()
    ADD ESP,0x10                        ; 00513660
    PUSH EBX                            ; 00513663
    CALL crt_stdio.c_fclose_FUN_00563380 ; 00513664
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_00563380()
    ADD ESP,0x4                         ; 00513669
    POP ESI                             ; 0051366c
    POP EBX                             ; 0051366d
    RET                                 ; 0051366e

