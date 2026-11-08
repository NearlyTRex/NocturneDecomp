; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0041a2e0(int param_1)
;
; Local Variables:
; undefined        Stack[-0x24]:1  local_24
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004186c0 at 00418784
;
; Referenced Globals:
;   TerminatedCString s_boneguy_comeback_wav_005cc3e5
;
; Called Functions:
;   FUN_00594380
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041a2e0
        ;   Label: FUN_0041a2e0
    PUSH ESI                            ; 0041a2e1
    PUSH EDI                            ; 0041a2e2
    PUSH EBP                            ; 0041a2e3
    SUB ESP,0x14                        ; 0041a2e4
    MOV EAX,dword ptr [ESP + 0x28]      ; 0041a2e7
    XOR EDX,EDX                         ; 0041a2eb
    MOV ECX,dword ptr [EAX + 0x10b74]   ; 0041a2ed
    MOV dword ptr [ESP + 0x10],EDX      ; 0041a2f3
    TEST ECX,ECX                        ; 0041a2f7
    JLE 0x0041a378                      ; 0041a2f9
        ;   XREF to: 0041a378 (CONDITIONAL_JUMP)  ; LAB_0041a378
    LEA EBP,[EAX + 0x10bb0]             ; 0041a2ff
    MOV EBX,EAX                         ; 0041a305
    MOV EAX,dword ptr [EBX + 0x10bbc]   ; 0041a307
        ;   Label: LAB_0041a307
    ADD EAX,0x30                        ; 0041a30d
    PUSH EAX                            ; 0041a310
    LEA ESI,[ESP + 0x4]                 ; 0041a311
    CALL FUN_00594380                   ; 0041a315
        ;   XREF to: 00594380 (UNCONDITIONAL_CALL)  ; undefined FUN_00594380()
    LEA ESI,[ESP + 0x4]                 ; 0041a31a
    LEA EDI,[EBX + 0x10b90]             ; 0041a31e
    ADD ESP,0x4                         ; 0041a324
    MOVSD ES:EDI,ESI                    ; 0041a327
    MOVSD ES:EDI,ESI                    ; 0041a328
    MOVSD ES:EDI,ESI                    ; 0041a329
    MOVSD ES:EDI,ESI                    ; 0041a32a
    MOV EAX,dword ptr [EBX + 0x10bbc]   ; 0041a32b
    MOV dword ptr [EAX + 0x1334],0x0    ; 0041a331
    MOV EAX,dword ptr [EBX + 0x10bbc]   ; 0041a33b
    ADD EAX,0x20                        ; 0041a341
    CMP EBP,EAX                         ; 0041a344
    JZ 0x0041a359                       ; 0041a346
        ;   XREF to: 0041a359 (CONDITIONAL_JUMP)  ; LAB_0041a359
    MOV EDX,dword ptr [EAX]             ; 0041a348
    MOV dword ptr [EBP],EDX             ; 0041a34a
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041a34d
    MOV dword ptr [EBP + 0x4],EDX       ; 0041a350
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041a353
    MOV dword ptr [EBP + 0x8],EDX       ; 0041a356
    MOV ESI,dword ptr [ESP + 0x10]      ; 0041a359
        ;   Label: LAB_0041a359
    INC ESI                             ; 0041a35d
    MOV dword ptr [ESP + 0x10],ESI      ; 0041a35e
    MOV EAX,ESI                         ; 0041a362
    MOV ESI,dword ptr [ESP + 0x28]      ; 0041a364
    ADD EBP,0x48                        ; 0041a368
    MOV EDI,dword ptr [ESI + 0x10b74]   ; 0041a36b
    ADD EBX,0x48                        ; 0041a371
    CMP EAX,EDI                         ; 0041a374
    JL 0x0041a307                       ; 0041a376
        ;   XREF to: 0041a307 (CONDITIONAL_JUMP)  ; LAB_0041a307
    MOV EAX,dword ptr [ESP + 0x28]      ; 0041a378
        ;   Label: LAB_0041a378
    PUSH 0x5cc3e5                       ; 0041a37c | = "boneguy-comeback.wav"
    MOV dword ptr [EAX + 0x11118],0x2   ; 0041a381
    MOV EBP,dword ptr [ESP + 0x2c]      ; 0041a38b
    MOV dword ptr [EAX + 0x1111c],0x0   ; 0041a38f
    PUSH EBP                            ; 0041a399
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 0041a39a
    CALL dword ptr [EAX + 0x34]         ; 0041a3a0
    ADD ESP,0x8                         ; 0041a3a3
    ADD ESP,0x14                        ; 0041a3a6
    POP EBP                             ; 0041a3a9
    POP EDI                             ; 0041a3aa
    POP ESI                             ; 0041a3ab
    POP EBX                             ; 0041a3ac
    RET                                 ; 0041a3ad

