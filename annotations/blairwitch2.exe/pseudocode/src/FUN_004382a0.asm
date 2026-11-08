; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004382a0(int param_1)
;
; Local Variables:
; undefined        Stack[-0x24]:1  local_24
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00436e80 at 00436f44
;
; Referenced Globals:
;   TerminatedCString s_boneguy_comeback_wav_005cdf6d
;
; Called Functions:
;   FUN_00594380
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004382a0
        ;   Label: FUN_004382a0
    PUSH ESI                            ; 004382a1
    PUSH EDI                            ; 004382a2
    PUSH EBP                            ; 004382a3
    SUB ESP,0x14                        ; 004382a4
    MOV EAX,dword ptr [ESP + 0x28]      ; 004382a7
    XOR EDX,EDX                         ; 004382ab
    MOV ECX,dword ptr [EAX + 0x10c14]   ; 004382ad
    MOV dword ptr [ESP + 0x10],EDX      ; 004382b3
    TEST ECX,ECX                        ; 004382b7
    JLE 0x00438338                      ; 004382b9
        ;   XREF to: 00438338 (CONDITIONAL_JUMP)  ; LAB_00438338
    LEA EBP,[EAX + 0x10c50]             ; 004382bf
    MOV EBX,EAX                         ; 004382c5
    MOV EAX,dword ptr [EBX + 0x10c5c]   ; 004382c7
        ;   Label: LAB_004382c7
    ADD EAX,0x30                        ; 004382cd
    PUSH EAX                            ; 004382d0
    LEA ESI,[ESP + 0x4]                 ; 004382d1
    CALL FUN_00594380                   ; 004382d5
        ;   XREF to: 00594380 (UNCONDITIONAL_CALL)  ; undefined FUN_00594380()
    LEA ESI,[ESP + 0x4]                 ; 004382da
    LEA EDI,[EBX + 0x10c30]             ; 004382de
    ADD ESP,0x4                         ; 004382e4
    MOVSD ES:EDI,ESI                    ; 004382e7
    MOVSD ES:EDI,ESI                    ; 004382e8
    MOVSD ES:EDI,ESI                    ; 004382e9
    MOVSD ES:EDI,ESI                    ; 004382ea
    MOV EAX,dword ptr [EBX + 0x10c5c]   ; 004382eb
    MOV dword ptr [EAX + 0x1334],0x0    ; 004382f1
    MOV EAX,dword ptr [EBX + 0x10c5c]   ; 004382fb
    ADD EAX,0x20                        ; 00438301
    CMP EBP,EAX                         ; 00438304
    JZ 0x00438319                       ; 00438306
        ;   XREF to: 00438319 (CONDITIONAL_JUMP)  ; LAB_00438319
    MOV EDX,dword ptr [EAX]             ; 00438308
    MOV dword ptr [EBP],EDX             ; 0043830a
    MOV EDX,dword ptr [EAX + 0x4]       ; 0043830d
    MOV dword ptr [EBP + 0x4],EDX       ; 00438310
    MOV EDX,dword ptr [EAX + 0x8]       ; 00438313
    MOV dword ptr [EBP + 0x8],EDX       ; 00438316
    MOV ESI,dword ptr [ESP + 0x10]      ; 00438319
        ;   Label: LAB_00438319
    INC ESI                             ; 0043831d
    MOV dword ptr [ESP + 0x10],ESI      ; 0043831e
    MOV EAX,ESI                         ; 00438322
    MOV ESI,dword ptr [ESP + 0x28]      ; 00438324
    ADD EBP,0x48                        ; 00438328
    MOV EDI,dword ptr [ESI + 0x10c14]   ; 0043832b
    ADD EBX,0x48                        ; 00438331
    CMP EAX,EDI                         ; 00438334
    JL 0x004382c7                       ; 00438336
        ;   XREF to: 004382c7 (CONDITIONAL_JUMP)  ; LAB_004382c7
    MOV EAX,dword ptr [ESP + 0x28]      ; 00438338
        ;   Label: LAB_00438338
    PUSH 0x5cdf6d                       ; 0043833c | = "boneguy-comeback.wav"
    MOV dword ptr [EAX + 0x112d8],0x2   ; 00438341
    MOV EBP,dword ptr [ESP + 0x2c]      ; 0043834b
    MOV dword ptr [EAX + 0x112dc],0x0   ; 0043834f
    PUSH EBP                            ; 00438359
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 0043835a
    CALL dword ptr [EAX + 0x34]         ; 00438360
    ADD ESP,0x8                         ; 00438363
    ADD ESP,0x14                        ; 00438366
    POP EBP                             ; 00438369
    POP EDI                             ; 0043836a
    POP ESI                             ; 0043836b
    POP EBX                             ; 0043836c
    RET                                 ; 0043836d

