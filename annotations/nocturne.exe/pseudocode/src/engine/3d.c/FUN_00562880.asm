; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * engine_3d_c_FUN_00562880(int param_1,int *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_02de497c
;   undefined4 DAT_02de4980
;   undefined4 DAT_02de49c8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00562880
        ;   Label: engine_3d.c_FUN_00562880
    PUSH ESI                            ; 00562881
    MOV EBX,dword ptr [0x02de497c]      ; 00562882 | DAT_02de497c
    MOV ECX,dword ptr [ESP + 0xc]       ; 00562888
    MOV ESI,dword ptr [ESP + 0x10]      ; 0056288c
    MOV EAX,0x2de4980                   ; 00562890
    XOR EDX,EDX                         ; 00562895
    TEST EBX,EBX                        ; 00562897
    JLE 0x005628ab                      ; 00562899
        ;   XREF to: 005628ab (CONDITIONAL_JUMP)  ; LAB_005628ab
    CMP ECX,dword ptr [EAX]             ; 0056289b | DAT_02de4980 | DAT_02de49c8
        ;   Label: LAB_0056289b
    JNZ 0x005628a3                      ; 0056289d
        ;   XREF to: 005628a3 (CONDITIONAL_JUMP)  ; LAB_005628a3
    CMP EAX,ESI                         ; 0056289f
    JNZ 0x005628ad                      ; 005628a1
        ;   XREF to: 005628ad (CONDITIONAL_JUMP)  ; LAB_005628ad
    INC EDX                             ; 005628a3
        ;   Label: LAB_005628a3
    ADD EAX,0x48                        ; 005628a4 | DAT_02de49c8
    CMP EDX,EBX                         ; 005628a7
    JL 0x0056289b                       ; 005628a9
        ;   XREF to: 0056289b (CONDITIONAL_JUMP)  ; LAB_0056289b
    XOR EAX,EAX                         ; 005628ab
        ;   Label: LAB_005628ab
    MOV dword ptr [0x02de497c],EBX      ; 005628ad | DAT_02de497c
        ;   Label: LAB_005628ad
    POP ESI                             ; 005628b3
    POP EBX                             ; 005628b4
    RET                                 ; 005628b5

