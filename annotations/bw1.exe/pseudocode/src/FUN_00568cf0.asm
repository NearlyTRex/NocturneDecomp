; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00568cf0(int param_1,undefined4 *param_2,undefined4 param_3)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00433b30 at 00433c08
;
; Called Functions:
;   FUN_00563630
;   FUN_00569f30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00568cf0
        ;   Label: FUN_00568cf0
    PUSH ESI                            ; 00568cf1
    PUSH EDI                            ; 00568cf2
    PUSH EBP                            ; 00568cf3
    SUB ESP,0x4                         ; 00568cf4
    MOV EBP,dword ptr [ESP + 0x18]      ; 00568cf7
    PUSH EBP                            ; 00568cfb
    CALL FUN_00569f30                   ; 00568cfc
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; undefined FUN_00569f30()
    XOR EBX,EBX                         ; 00568d01
    ADD ESP,0x4                         ; 00568d03
    MOV EDX,dword ptr [EAX + 0x1de78]   ; 00568d06
    MOV dword ptr [ESP],EAX             ; 00568d0c
    TEST EDX,EDX                        ; 00568d0f
    JLE 0x00568d49                      ; 00568d11
        ;   XREF to: 00568d49 (CONDITIONAL_JUMP)  ; LAB_00568d49
    MOV ESI,dword ptr [ESP + 0x20]      ; 00568d13
        ;   Label: LAB_00568d13
    PUSH ESI                            ; 00568d17
    PUSH EBX                            ; 00568d18
    MOV EDI,dword ptr [ESP + 0x8]       ; 00568d19
    PUSH EDI                            ; 00568d1d
    CALL FUN_00563630                   ; 00568d1e
        ;   XREF to: 00563630 (UNCONDITIONAL_CALL)  ; undefined FUN_00563630()
    ADD ESP,0xc                         ; 00568d23
    TEST EAX,EAX                        ; 00568d26
    JL 0x00568d38                       ; 00568d28
        ;   XREF to: 00568d38 (CONDITIONAL_JUMP)  ; LAB_00568d38
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00568d2a
    LEA EDI,[EBP + 0x6b0]               ; 00568d2e
    MOVSD ES:EDI,ESI                    ; 00568d34
    MOVSD ES:EDI,ESI                    ; 00568d35
    MOVSD ES:EDI,ESI                    ; 00568d36
    MOVSD ES:EDI,ESI                    ; 00568d37
    MOV EAX,dword ptr [ESP]             ; 00568d38
        ;   Label: LAB_00568d38
    INC EBX                             ; 00568d3b
    MOV ECX,dword ptr [EAX + 0x1de78]   ; 00568d3c
    ADD EBP,0x10                        ; 00568d42
    CMP EBX,ECX                         ; 00568d45
    JL 0x00568d13                       ; 00568d47
        ;   XREF to: 00568d13 (CONDITIONAL_JUMP)  ; LAB_00568d13
    ADD ESP,0x4                         ; 00568d49
        ;   Label: LAB_00568d49
    POP EBP                             ; 00568d4c
    POP EDI                             ; 00568d4d
    POP ESI                             ; 00568d4e
    POP EBX                             ; 00568d4f
    RET                                 ; 00568d50

