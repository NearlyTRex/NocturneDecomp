; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00527050(int param_1,int param_2,undefined4 param_3)
;
;
; Called Functions:
;   FUN_00430810
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00527050
        ;   Label: FUN_00527050
    PUSH ESI                            ; 00527051
    MOV EBX,dword ptr [ESP + 0xc]       ; 00527052
    MOV EDX,dword ptr [ESP + 0x10]      ; 00527056
    CMP EDX,dword ptr [EBX + 0x20c24]   ; 0052705a
    JZ 0x00527078                       ; 00527060
        ;   XREF to: 00527078 (CONDITIONAL_JUMP)  ; LAB_00527078
    MOV ECX,dword ptr [ESP + 0x14]      ; 00527062
        ;   Label: LAB_00527062
    PUSH ECX                            ; 00527066
    MOV ESI,dword ptr [ESP + 0x14]      ; 00527067
    PUSH ESI                            ; 0052706b
    PUSH EBX                            ; 0052706c
    CALL FUN_00430810                   ; 0052706d
        ;   XREF to: 00430810 (UNCONDITIONAL_CALL)  ; undefined FUN_00430810()
    ADD ESP,0xc                         ; 00527072
    POP ESI                             ; 00527075
    POP EBX                             ; 00527076
    RET                                 ; 00527077
    PUSH 0x0                            ; 00527078
        ;   Label: LAB_00527078
    MOV EAX,dword ptr [EBX + 0x154]     ; 0052707a
    PUSH EBX                            ; 00527080
    MOV dword ptr [EBX + 0x20c24],0x0   ; 00527081
    CALL dword ptr [EAX + 0x144]        ; 0052708b
    ADD ESP,0x8                         ; 00527091
    JMP 0x00527062                      ; 00527094
        ;   XREF to: 00527062 (UNCONDITIONAL_JUMP)  ; LAB_00527062

