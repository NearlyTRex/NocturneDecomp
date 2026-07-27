; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setdir_cpp_CDemonSet_findVdirBoxRoot_FUN_00514300(int param_1,int param_2)
;
;
; XREF[3]:
;   core_setdir.cpp_CDemonSet_buildVdirBoxGroups_FUN_005141f0 at 00514253
;   core_setdir.cpp_CDemonSet_findVdirBoxAtPosition_FUN_00514340 at 0051437a
;   core_setdir.cpp_FUN_00513e20 at 00513e34
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00514300
        ;   Label: core_setdir.cpp_CDemonSet_findVdirBoxRoot_FUN_00514300
    MOV EBX,dword ptr [ESP + 0x8]       ; 00514301
    MOV ECX,dword ptr [ESP + 0xc]       ; 00514305
    PUSH ESI                            ; 00514309
    MOV EAX,ECX                         ; 0051430a
    IMUL EDX,EAX,0x44                   ; 0051430c
        ;   Label: LAB_0051430c
    ADD EDX,EBX                         ; 0051430f
    MOV ESI,dword ptr [EDX + 0x15b06c]  ; 00514311
    TEST ESI,ESI                        ; 00514317
    JL 0x0051431f                       ; 00514319
        ;   XREF to: 0051431f (CONDITIONAL_JUMP)  ; LAB_0051431f
    MOV EAX,ESI                         ; 0051431b
    JMP 0x0051430c                      ; 0051431d
        ;   XREF to: 0051430c (UNCONDITIONAL_JUMP)  ; LAB_0051430c
    POP ESI                             ; 0051431f
        ;   Label: LAB_0051431f
    CMP ECX,EAX                         ; 00514320
        ;   Label: LAB_00514320
    JZ 0x00514290                       ; 00514322
        ;   XREF to: 00514290 (CONDITIONAL_JUMP)  ; LAB_00514290
    IMUL EDX,ECX,0x44                   ; 00514328
    MOV ECX,dword ptr [EDX + EBX*0x1 + 0x15b06c] ; 0051432b
    MOV dword ptr [EDX + EBX*0x1 + 0x15b06c],EAX ; 00514332
    JMP 0x00514320                      ; 00514339
        ;   XREF to: 00514320 (UNCONDITIONAL_JUMP)  ; LAB_00514320

