; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c267a(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[1]:
;   core_skeleton.cpp_FUN_005639e0 at 00563a90
;
; Called Functions:
;   crt_unknown.c_FUN_005c2622
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c267a
        ;   Label: crt_unknown.c_FUN_005c267a
    MOV EDX,dword ptr [ESP + 0x10]      ; 005c267b
    PUSH EDX                            ; 005c267f
    MOV ECX,dword ptr [ESP + 0x10]      ; 005c2680
    PUSH ECX                            ; 005c2684
    MOV EBX,dword ptr [ESP + 0x10]      ; 005c2685
    PUSH EBX                            ; 005c2689
    CALL crt_unknown.c_FUN_005c2622     ; 005c268a
        ;   XREF to: 005c2622 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c2622()
    ADD ESP,0xc                         ; 005c268f
    POP EBX                             ; 005c2692
    RET                                 ; 005c2693

