; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00419940(int param_1,float param_2)
;
; Local Variables:
; undefined8       Stack[-0x50]:8  local_50
; undefined4       Stack[-0x48]:4  local_48
; undefined        Stack[-0x44]:1  local_44
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   FUN_00419740 at 004197c3
;
; Referenced Globals:
;   undefined4 DAT_005d44b1
;   undefined4 DAT_005d44b9
;   undefined4 DAT_005d44c1
;   undefined4 DAT_005d44c9
;
; Called Functions:
;   FUN_00408b40
;   FUN_004b7b90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00419940
        ;   Label: FUN_00419940
    PUSH ESI                            ; 00419941
    PUSH EDI                            ; 00419942
    PUSH EBP                            ; 00419943
    MOV EBP,ESP                         ; 00419944
    SUB ESP,0x3c                        ; 00419946
    AND ESP,0xfffffff8                  ; 00419949
    MOV EAX,dword ptr [EBP + 0x14]      ; 0041994c
    CMP dword ptr [EAX + 0x74c],0x0     ; 0041994f
    JZ 0x00419a77                       ; 00419956
        ;   XREF to: 00419a77 (CONDITIONAL_JUMP)  ; LAB_00419a77
    FLD float ptr [EAX + 0xccc]         ; 0041995c
    FSUB float ptr [EBP + 0x18]         ; 00419962
    FST float ptr [EAX + 0xccc]         ; 00419965
    FLDZ                                ; 0041996b
    FCOMPP                              ; 0041996d
    FNSTSW AX                           ; 0041996f
    SAHF                                ; 00419971
    JA 0x00419a7e                       ; 00419972
        ;   XREF to: 00419a7e (CONDITIONAL_JUMP)  ; LAB_00419a7e
    MOV EAX,dword ptr [EBP + 0x14]      ; 00419978
    XOR ECX,ECX                         ; 0041997b
    MOV EBX,dword ptr [EAX + 0x74c]     ; 0041997d
    MOV dword ptr [ESP + 0x34],ECX      ; 00419983
    TEST EBX,EBX                        ; 00419987
    JLE 0x00419a77                      ; 00419989
        ;   XREF to: 00419a77 (CONDITIONAL_JUMP)  ; LAB_00419a77
    ADD EAX,0x750                       ; 0041998f
    MOV dword ptr [ESP + 0x30],EAX      ; 00419994
    MOV EAX,dword ptr [EBP + 0x14]      ; 00419998
    ADD EAX,0x77c                       ; 0041999b
    MOV dword ptr [ESP + 0x38],EAX      ; 004199a0
    IMUL EBX,dword ptr [ESP + 0x34],0x2b0 ; 004199a4
        ;   Label: LAB_004199a4
    ADD EBX,dword ptr [ESP + 0x30]      ; 004199ac
    PUSH EBX                            ; 004199b0
    MOV EDI,dword ptr [EBP + 0x14]      ; 004199b1
    PUSH EDI                            ; 004199b4
    LEA ESI,[ESP + 0x14]                ; 004199b5
    CALL FUN_00408b40                   ; 004199b9
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b40()
    LEA EDI,[ESP + 0x20]                ; 004199be
    LEA ESI,[ESP + 0x14]                ; 004199c2
    ADD ESP,0x8                         ; 004199c6
    MOVSD ES:EDI,ESI                    ; 004199c9
    MOVSD ES:EDI,ESI                    ; 004199ca
    MOVSD ES:EDI,ESI                    ; 004199cb
    MOV ESI,dword ptr [ESP + 0x38]      ; 004199cc
    MOV EAX,dword ptr [ESP + 0x18]      ; 004199d0
    MOV dword ptr [ESI],EAX             ; 004199d4
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004199d6
    MOV dword ptr [ESI + 0x4],EAX       ; 004199da
    MOV EAX,dword ptr [ESP + 0x20]      ; 004199dd
    MOV dword ptr [ESI + 0x8],EAX       ; 004199e1
    MOV dword ptr [ESP + 0x8],0x3f800000 ; 004199e4
    MOV EAX,dword ptr [EBP + 0x14]      ; 004199ec
    FLD float ptr [EAX + 0xccc]         ; 004199ef
    FST double ptr [ESP]                ; 004199f5
    FCOMP double ptr [0x005d44c9]       ; 004199f8 | DAT_005d44c9
    FNSTSW AX                           ; 004199fe
    SAHF                                ; 00419a00
    JNC 0x00419a10                      ; 00419a01
        ;   XREF to: 00419a10 (CONDITIONAL_JUMP)  ; LAB_00419a10
    FLD double ptr [ESP]                ; 00419a03
    FMUL double ptr [0x005d44c1]        ; 00419a06 | DAT_005d44c1
    FSTP float ptr [ESP + 0x8]          ; 00419a0c
    FLD float ptr [ESP + 0x8]           ; 00419a10
        ;   Label: LAB_00419a10
    FLD ST0                             ; 00419a14
    FMUL double ptr [0x005d44b1]        ; 00419a16 | DAT_005d44b1
    FXCH                                ; 00419a1c
    FMUL double ptr [0x005d44b9]        ; 00419a1e | DAT_005d44b9
    ADD EBX,0xc                         ; 00419a24
    FXCH                                ; 00419a27
    FSTP float ptr [ESP + 0x2c]         ; 00419a29
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00419a2d
    PUSH dword ptr [EBP + 0x18]         ; 00419a31
    MOV dword ptr [EBX + 0x158],EAX     ; 00419a34
    PUSH EBX                            ; 00419a3a
    FSTP float ptr [EBX + 0x15c]        ; 00419a3b
    MOV dword ptr [EBX + 0x160],EAX     ; 00419a41
    CALL FUN_004b7b90                   ; 00419a47
        ;   XREF to: 004b7b90 (UNCONDITIONAL_CALL)  ; undefined FUN_004b7b90()
    ADD ESP,0x8                         ; 00419a4c
    MOV ESI,dword ptr [ESP + 0x38]      ; 00419a4f
    MOV EDI,dword ptr [ESP + 0x34]      ; 00419a53
    MOV EBX,dword ptr [EBP + 0x14]      ; 00419a57
    ADD ESI,0x2b0                       ; 00419a5a
    INC EDI                             ; 00419a60
    MOV EDX,dword ptr [EBX + 0x74c]     ; 00419a61
    MOV dword ptr [ESP + 0x38],ESI      ; 00419a67
    MOV dword ptr [ESP + 0x34],EDI      ; 00419a6b
    CMP EDI,EDX                         ; 00419a6f
    JL 0x004199a4                       ; 00419a71
        ;   XREF to: 004199a4 (CONDITIONAL_JUMP)  ; LAB_004199a4
    MOV ESP,EBP                         ; 00419a77
        ;   Label: LAB_00419a77
    POP EBP                             ; 00419a79
    POP EDI                             ; 00419a7a
    POP ESI                             ; 00419a7b
    POP EBX                             ; 00419a7c
    RET                                 ; 00419a7d
    MOV EAX,dword ptr [EBP + 0x14]      ; 00419a7e
        ;   Label: LAB_00419a7e
    MOV dword ptr [EAX + 0x74c],0x0     ; 00419a81
    MOV dword ptr [EAX + 0xccc],0x0     ; 00419a8b
    MOV ESP,EBP                         ; 00419a95
    POP EBP                             ; 00419a97
    POP EDI                             ; 00419a98
    POP ESI                             ; 00419a99
    POP EBX                             ; 00419a9a
    RET                                 ; 00419a9b

