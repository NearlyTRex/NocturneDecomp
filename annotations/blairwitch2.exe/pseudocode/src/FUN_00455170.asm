; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00455170(int param_1,undefined4 param_2)
;
; Local Variables:
; undefined4       Stack[-0x1aec]:4  local_1aec
; undefined        Stack[-0x48]:1  local_48
; undefined        Stack[-0x38]:1  local_38
; undefined        Stack[-0x28]:1  local_28
; undefined        Stack[-0x1c]:1  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   FUN_00453d80 at 00453e2e
;
; Referenced Globals:
;   undefined4 DAT_005d01d7
;   undefined4 DAT_01b4d258
;
; Called Functions:
;   FUN_00544f80
;   FUN_00546f40
;   FUN_00548620
;   FUN_005486f0
;   FUN_00593fe0
;   FUN_005940b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00455170
        ;   Label: FUN_00455170
    PUSH ESI                            ; 00455171
    PUSH EDI                            ; 00455172
    SUB ESP,0x1ad8                      ; 00455173
    MOV ESI,dword ptr [ESP + 0x1ae8]    ; 00455179
    MOV EAX,ESP                         ; 00455180
    PUSH EAX                            ; 00455182
    LEA EBX,[ESI + 0x2b4]               ; 00455183
    PUSH EBX                            ; 00455189
    CALL FUN_00548620                   ; 0045518a
        ;   XREF to: 00548620 (UNCONDITIONAL_CALL)  ; undefined FUN_00548620()
    ADD ESP,0x8                         ; 0045518f
    FLD float ptr [ESI + 0x256bc]       ; 00455192
    PUSH -0x1                           ; 00455198
    FMUL double ptr [0x005d01d7]        ; 0045519a | DAT_005d01d7
    SUB ESP,0x4                         ; 004551a0
    FSTP float ptr [ESP]                ; 004551a3
    MOV EDX,dword ptr [ESI + 0x256ec]   ; 004551a6
    PUSH EDX                            ; 004551ac
    PUSH EBX                            ; 004551ad
    CALL FUN_00544f80                   ; 004551ae
        ;   XREF to: 00544f80 (UNCONDITIONAL_CALL)  ; undefined FUN_00544f80()
    MOV EAX,[0x01b4d258]                ; 004551b3 | DAT_01b4d258
    ADD ESI,0x964                       ; 004551b8
    SHL EAX,0x4                         ; 004551be
    ADD ESP,0x10                        ; 004551c1
    ADD EAX,ESI                         ; 004551c4
    PUSH EAX                            ; 004551c6
    LEA ESI,[ESP + 0x1ac0]              ; 004551c7
    LEA EDI,[ESP + 0x1acc]              ; 004551ce
    CALL FUN_005940b0                   ; 004551d5
        ;   XREF to: 005940b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005940b0()
    LEA ESI,[ESP + 0x1ac0]              ; 004551da
    ADD ESP,0x4                         ; 004551e1
    MOVSD ES:EDI,ESI                    ; 004551e4
    MOVSD ES:EDI,ESI                    ; 004551e5
    MOVSD ES:EDI,ESI                    ; 004551e6
    PUSH 0x544cc0                       ; 004551e7 | LAB_00544cc0
    FLD float ptr [ESP + 0x1ad0]        ; 004551ec
    PUSH -0x1                           ; 004551f3
    LEA ESI,[ESP + 0x1ab4]              ; 004551f5
    FCHS                                ; 004551fc
    PUSH 0x3f800000                     ; 004551fe
    FSTP float ptr [ESP + 0x1ae0]       ; 00455203
    PUSH dword ptr [ESP + 0x1ae0]       ; 0045520a
    CALL FUN_00593fe0                   ; 00455211
        ;   XREF to: 00593fe0 (UNCONDITIONAL_CALL)  ; undefined FUN_00593fe0()
    ADD ESP,0x4                         ; 00455216
    LEA EAX,[ESP + 0x1aa8]              ; 00455219
    PUSH EAX                            ; 00455220
    LEA EDI,[ESP + 0x1aac]              ; 00455221
    LEA ESI,[ESP + 0x1abc]              ; 00455228
    PUSH EBX                            ; 0045522f
    MOVSD ES:EDI,ESI                    ; 00455230
    MOVSD ES:EDI,ESI                    ; 00455231
    MOVSD ES:EDI,ESI                    ; 00455232
    MOVSD ES:EDI,ESI                    ; 00455233
    CALL FUN_00546f40                   ; 00455234
        ;   XREF to: 00546f40 (UNCONDITIONAL_CALL)  ; undefined FUN_00546f40()
    ADD ESP,0x14                        ; 00455239
    MOV ECX,dword ptr [ESP + 0x1aec]    ; 0045523c
    PUSH ECX                            ; 00455243
    PUSH EBX                            ; 00455244
    CALL FUN_00548620                   ; 00455245
        ;   XREF to: 00548620 (UNCONDITIONAL_CALL)  ; undefined FUN_00548620()
    ADD ESP,0x8                         ; 0045524a
    MOV EAX,ESP                         ; 0045524d
    PUSH EAX                            ; 0045524f
    PUSH EBX                            ; 00455250
    CALL FUN_005486f0                   ; 00455251
        ;   XREF to: 005486f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005486f0()
    ADD ESP,0x8                         ; 00455256
    ADD ESP,0x1ad8                      ; 00455259
    POP EDI                             ; 0045525f
    POP ESI                             ; 00455260
    POP EBX                             ; 00455261
    RET                                 ; 00455262

