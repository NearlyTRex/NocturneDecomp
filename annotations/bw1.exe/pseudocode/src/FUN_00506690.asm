; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00506690(int param_1,undefined4 *param_2,int param_3)
;
;
; Called Functions:
;   FUN_004088b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00506690
        ;   Label: FUN_00506690
    MOV ECX,dword ptr [ESP + 0x8]       ; 00506691
    MOV EDX,dword ptr [ESP + 0xc]       ; 00506695
    MOV EAX,dword ptr [ESP + 0x10]      ; 00506699
    MOV EBX,dword ptr [EAX + 0xc]       ; 0050669d
    TEST EBX,EBX                        ; 005066a0
    JNZ 0x005066d1                      ; 005066a2
        ;   XREF to: 005066d1 (CONDITIONAL_JUMP)  ; LAB_005066d1
    CMP dword ptr [EAX + 0x10],0x0      ; 005066a4
    JNZ 0x005066dc                      ; 005066a8
        ;   XREF to: 005066dc (CONDITIONAL_JUMP)  ; LAB_005066dc
    LEA EAX,[ECX + 0x30]                ; 005066aa
    CMP EAX,EDX                         ; 005066ad
    JZ 0x005066c1                       ; 005066af
        ;   XREF to: 005066c1 (CONDITIONAL_JUMP)  ; LAB_005066c1
    MOV EBX,dword ptr [EDX]             ; 005066b1
    MOV dword ptr [EAX],EBX             ; 005066b3
    MOV EBX,dword ptr [EDX + 0x4]       ; 005066b5
    MOV dword ptr [EAX + 0x4],EBX       ; 005066b8
    MOV EBX,dword ptr [EDX + 0x8]       ; 005066bb
    MOV dword ptr [EAX + 0x8],EBX       ; 005066be
    PUSH ECX                            ; 005066c1
        ;   Label: LAB_005066c1
    CALL FUN_004088b0                   ; 005066c2
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004088b0()
    MOV EAX,0x1                         ; 005066c7
    ADD ESP,0x4                         ; 005066cc
    POP EBX                             ; 005066cf
    RET                                 ; 005066d0
    MOV dword ptr [EAX + 0xc],0x0       ; 005066d1
        ;   Label: LAB_005066d1
    XOR EAX,EAX                         ; 005066d8
    POP EBX                             ; 005066da
    RET                                 ; 005066db
    MOV dword ptr [EAX + 0x10],EBX      ; 005066dc
        ;   Label: LAB_005066dc
    XOR EAX,EAX                         ; 005066df
    POP EBX                             ; 005066e1
    RET                                 ; 005066e2

