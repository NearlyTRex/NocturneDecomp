; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00454530(int param_1)
;
;
; XREF[20]:
;   FUN_0040a740 at 0040a9fa
;   FUN_0041e430 at 0041e452
;   FUN_0041e5e0 at 0041e5f9
;   FUN_004544d0 at 004544f0
;   FUN_00483320 at 00483468
;   FUN_004835d0 at 00483607
;   FUN_00486e40 at 00486f59
;   FUN_004873b0 at 00487428
;   FUN_004874d0 at 00487578
;   FUN_004950a0 at 00495105
;   ... and 10 more
;
; Referenced Globals:
;   string s_..\\core\\dmodel.cpp_0057cea8
;   string s_Tried_to_do_something_with_model_0057cebb
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00454530
        ;   Label: FUN_00454530
    MOV EBX,dword ptr [ESP + 0x8]       ; 00454531
    CMP dword ptr [EBX + 0x178],0x0     ; 00454535
    JZ 0x00454546                       ; 0045453c
        ;   XREF to: 00454546 (CONDITIONAL_JUMP)  ; LAB_00454546
    MOV EAX,dword ptr [EBX + 0x178]     ; 0045453e
    POP EBX                             ; 00454544
    RET                                 ; 00454545
    PUSH ESI                            ; 00454546
        ;   Label: LAB_00454546
    LEA EAX,[EBX + 0x78]                ; 00454547
    PUSH EAX                            ; 0045454a
    MOV ECX,0x57cea8                    ; 0045454b | = "..\\core\\dmodel.cpp"
    MOV ESI,0x52d                       ; 00454550
    PUSH 0x57cebb                       ; 00454555 | = "Tried to do something with model %s, ..."
    MOV dword ptr [0x01cc4800],ECX      ; 0045455a | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 00454560 | DAT_01cc4804
    CALL FUN_004c8440                   ; 00454566
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x8                         ; 0045456b
    POP ESI                             ; 0045456e
    MOV EAX,dword ptr [EBX + 0x178]     ; 0045456f
    POP EBX                             ; 00454575
    RET                                 ; 00454576

