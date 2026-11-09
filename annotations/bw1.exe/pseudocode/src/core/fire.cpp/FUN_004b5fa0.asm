; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_FUN_004b5fa0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)
;
;
; XREF[2]:
;   core_constrct.cpp_FUN_00445cb0 at 004463d4
;   core_emitter.cpp_FUN_0049f310 at 0049f5fb
;
; Referenced Globals:
;   undefined4 DAT_01c9dab4
;   undefined4 CFirefly_ARRAY_01c9dab8[0].field60_0x3c
;
; Called Functions:
;   core_actor.cpp_FUN_0040cc60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b5fa0
        ;   Label: core_fire.cpp_FUN_004b5fa0
    PUSH EDI                            ; 004b5fa1
    PUSH EBP                            ; 004b5fa2
    MOV EBX,dword ptr [0x01c9dab4]      ; 004b5fa3 | DAT_01c9dab4
    LEA EAX,[EBX*0x4 + 0x0]             ; 004b5fa9
    SUB EAX,EBX                         ; 004b5fb0
    MOV EDX,dword ptr [0x01c9dab4]      ; 004b5fb2 | DAT_01c9dab4
    SHL EAX,0x3                         ; 004b5fb8
    INC EDX                             ; 004b5fbb
    SUB EAX,EBX                         ; 004b5fbc
    MOV EBX,0x1c9dab8                   ; 004b5fbe
    SHL EAX,0x2                         ; 004b5fc3
    MOV dword ptr [0x01c9dab4],EDX      ; 004b5fc6 | DAT_01c9dab4
    ADD EBX,EAX                         ; 004b5fcc
    CMP EDX,0x40                        ; 004b5fce
    JL 0x004b5fdd                       ; 004b5fd1
        ;   XREF to: 004b5fdd (CONDITIONAL_JUMP)  ; LAB_004b5fdd
    PUSH ESI                            ; 004b5fd3
    XOR ESI,ESI                         ; 004b5fd4
    MOV dword ptr [0x01c9dab4],ESI      ; 004b5fd6 | DAT_01c9dab4
    POP ESI                             ; 004b5fdc
    MOV EDI,dword ptr [ESP + 0x18]      ; 004b5fdd
        ;   Label: LAB_004b5fdd
    PUSH EDI                            ; 004b5fe1
    MOV EBP,dword ptr [ESP + 0x18]      ; 004b5fe2
    PUSH EBP                            ; 004b5fe6
    MOV EAX,dword ptr [EBX + 0x3c]      ; 004b5fe7 | CFirefly_ARRAY_01c9dab8[0].field60_0x3c
    PUSH EBX                            ; 004b5fea
    CALL dword ptr [EAX]                ; 004b5feb
    ADD ESP,0xc                         ; 004b5fed
    PUSH 0xffff                         ; 004b5ff0
    PUSH 0xc000                         ; 004b5ff5
    CALL core_actor.cpp_FUN_0040cc60    ; 004b5ffa
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 004b5fff
    MOV EDX,EAX                         ; 004b6002
    MOV EAX,dword ptr [ESP + 0x20]      ; 004b6004
    IMUL EDX                            ; 004b6008
    SHRD EAX,EDX,0x10                   ; 004b600a
    MOV dword ptr [EBX + 0x40],EAX      ; 004b600e
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004b6011
    MOV dword ptr [EBX + 0x44],EAX      ; 004b6015
    MOV EAX,dword ptr [ESP + 0x24]      ; 004b6018
    MOV dword ptr [EBX + 0x54],EAX      ; 004b601c
    MOV EAX,dword ptr [ESP + 0x28]      ; 004b601f
    MOV dword ptr [EBX + 0x58],EAX      ; 004b6023
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004b6026
    MOV dword ptr [EBX + 0x48],EAX      ; 004b602a
    MOV EAX,dword ptr [ESP + 0x30]      ; 004b602d
    MOV dword ptr [EBX + 0x50],EAX      ; 004b6031
    LEA EAX,[EBX + 0xc]                 ; 004b6034
    MOV dword ptr [EBX + 0x4c],0x0      ; 004b6037
    MOV dword ptr [EAX + 0x8],0x0       ; 004b603e
    MOV EDX,dword ptr [EAX + 0x8]       ; 004b6045
    MOV dword ptr [EAX + 0x4],EDX       ; 004b6048
    MOV EDX,dword ptr [EAX + 0x4]       ; 004b604b
    MOV dword ptr [EAX],EDX             ; 004b604e
    MOV dword ptr [EBX + 0x20],0x0      ; 004b6050
    MOV EAX,dword ptr [EBX + 0x20]      ; 004b6057
    MOV dword ptr [EBX + 0x1c],EAX      ; 004b605a
    MOV EAX,dword ptr [EBX + 0x1c]      ; 004b605d
    MOV dword ptr [EBX + 0x18],EAX      ; 004b6060
    POP EBP                             ; 004b6063
    POP EDI                             ; 004b6064
    POP EBX                             ; 004b6065
    RET                                 ; 004b6066

