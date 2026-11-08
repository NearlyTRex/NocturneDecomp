; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004af340(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)
;
; Local Variables:
; undefined        Stack[-0x28]:1  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004b5a70 at 004b5aaf
;
; Referenced Globals:
;   undefined4 DAT_00622c18
;   undefined4 DAT_01e82168
;
; Called Functions:
;   FUN_0045e970
;   FUN_0045e9c0
;   FUN_0045f840
;   FUN_00551960
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004af340
        ;   Label: FUN_004af340
    PUSH ESI                            ; 004af341
    PUSH EDI                            ; 004af342
    PUSH EBP                            ; 004af343
    SUB ESP,0x18                        ; 004af344
    MOV EBP,dword ptr [ESP + 0x2c]      ; 004af347
    MOV ESI,dword ptr [ESP + 0x30]      ; 004af34b
    PUSH ESI                            ; 004af34f
    LEA EBX,[EBP + 0x1c]                ; 004af350
    PUSH EBX                            ; 004af353
    CALL FUN_0045e970                   ; 004af354
        ;   XREF to: 0045e970 (UNCONDITIONAL_CALL)  ; undefined FUN_0045e970()
    ADD ESP,0x8                         ; 004af359
    PUSH 0x41000000                     ; 004af35c
    MOV dword ptr [EBX + 0x3c],0x8000   ; 004af361
    PUSH EBX                            ; 004af368
    MOV byte ptr [EBX + 0x1c],0x20      ; 004af369
    CALL FUN_0045e9c0                   ; 004af36d
        ;   XREF to: 0045e9c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0045e9c0()
    ADD ESP,0x8                         ; 004af372
    PUSH EBX                            ; 004af375
    MOV EDX,dword ptr [0x00622c18]      ; 004af376 | DAT_00622c18
    PUSH EDX                            ; 004af37c | DAT_01e82168
    MOV dword ptr [EBX + 0x20],0x0      ; 004af37d
    CALL FUN_00551960                   ; 004af384
        ;   XREF to: 00551960 (UNCONDITIONAL_CALL)  ; undefined FUN_00551960()
    LEA EAX,[EBP + 0x4]                 ; 004af389
    ADD ESP,0x8                         ; 004af38c
    CMP EAX,ESI                         ; 004af38f
    JZ 0x004af3a3                       ; 004af391
        ;   XREF to: 004af3a3 (CONDITIONAL_JUMP)  ; LAB_004af3a3
    MOV EDX,dword ptr [ESI]             ; 004af393
    MOV dword ptr [EAX],EDX             ; 004af395
    MOV EDX,dword ptr [ESI + 0x4]       ; 004af397
    MOV dword ptr [EAX + 0x4],EDX       ; 004af39a
    MOV EDX,dword ptr [ESI + 0x8]       ; 004af39d
    MOV dword ptr [EAX + 0x8],EDX       ; 004af3a0
    MOV ECX,dword ptr [ESP + 0x34]      ; 004af3a3
        ;   Label: LAB_004af3a3
    MOV ESI,ESP                         ; 004af3a7
    PUSH ECX                            ; 004af3a9
    LEA EDI,[ESP + 0x10]                ; 004af3aa
    LEA EBX,[EBP + 0x10]                ; 004af3ae
    CALL FUN_0045f840                   ; 004af3b1
        ;   XREF to: 0045f840 (UNCONDITIONAL_CALL)  ; undefined FUN_0045f840()
    LEA ESI,[ESP + 0x4]                 ; 004af3b6
    ADD ESP,0x4                         ; 004af3ba
    LEA EAX,[ESP + 0xc]                 ; 004af3bd
    MOVSD ES:EDI,ESI                    ; 004af3c1
    MOVSD ES:EDI,ESI                    ; 004af3c2
    MOVSD ES:EDI,ESI                    ; 004af3c3
    CMP EBX,EAX                         ; 004af3c4
    JNZ 0x004af3d7                      ; 004af3c6
        ;   XREF to: 004af3d7 (CONDITIONAL_JUMP)  ; LAB_004af3d7
    MOV dword ptr [EBP],0x2             ; 004af3c8
    ADD ESP,0x18                        ; 004af3cf
    POP EBP                             ; 004af3d2
    POP EDI                             ; 004af3d3
    POP ESI                             ; 004af3d4
    POP EBX                             ; 004af3d5
    RET                                 ; 004af3d6
    MOV EAX,dword ptr [ESP + 0xc]       ; 004af3d7
        ;   Label: LAB_004af3d7
    MOV dword ptr [EBX],EAX             ; 004af3db
    MOV EAX,dword ptr [ESP + 0x10]      ; 004af3dd
    MOV dword ptr [EBX + 0x4],EAX       ; 004af3e1
    MOV EAX,dword ptr [ESP + 0x14]      ; 004af3e4
    MOV dword ptr [EBX + 0x8],EAX       ; 004af3e8
    MOV dword ptr [EBP],0x2             ; 004af3eb
    ADD ESP,0x18                        ; 004af3f2
    POP EBP                             ; 004af3f5
    POP EDI                             ; 004af3f6
    POP ESI                             ; 004af3f7
    POP EBX                             ; 004af3f8
    RET                                 ; 004af3f9

