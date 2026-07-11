; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00450170(int param_1)
;
;
; XREF[1]:
;   FUN_00515350 at 00515412
;
; Referenced Globals:
;   undefined4 s_..\\core\\dlight.cpp_0057c825+1
;   string s_CDemonLight::allocateFilter_-_Ou_0057c839
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   FUN_004c8440
;   FUN_005635b0
;
; *****************************************************************************

section .text

    PUSH 0x10000                        ; 00450170
        ;   Label: FUN_00450170
    CALL FUN_005635b0                   ; 00450175
        ;   XREF to: 005635b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005635b0()
    ADD ESP,0x4                         ; 0045017a
    MOV EDX,dword ptr [ESP + 0x4]       ; 0045017d
    MOV dword ptr [EDX + 0x1c6c],EAX    ; 00450181
    TEST EAX,EAX                        ; 00450187
    JZ 0x0045018c                       ; 00450189
        ;   XREF to: 0045018c (CONDITIONAL_JUMP)  ; LAB_0045018c
    RET                                 ; 0045018b
    PUSH EBX                            ; 0045018c
        ;   Label: LAB_0045018c
    MOV ECX,0x57c826                    ; 0045018d | s_..\core\dlight.cpp_0057c825+1
    MOV EBX,0x541                       ; 00450192
    PUSH 0x57c839                       ; 00450197 | = "CDemonLight::allocateFilter - Out of ..."
    MOV dword ptr [0x01cc4800],ECX      ; 0045019c | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EBX      ; 004501a2 | DAT_01cc4804
    CALL FUN_004c8440                   ; 004501a8
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004501ad
    POP EBX                             ; 004501b0
    RET                                 ; 004501b1

