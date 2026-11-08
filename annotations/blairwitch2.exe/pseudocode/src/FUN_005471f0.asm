; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005471f0(int param_1,undefined4 param_2)
;
;
; XREF[13]:
;   FUN_004203a0 at 004204fc
;   FUN_00421b10 at 00421c43
;   FUN_005431b0 at 0054325b
;   FUN_00544380 at 00544468
;   FUN_00547280 at 005472b7
;   FUN_005472d0 at 00547307
;   FUN_00547320 at 00547357
;   FUN_00547620 at 00547669
;   FUN_00548130 at 00548193
;   FUN_005481d0 at 0054823c
;   ... and 3 more
;
; Called Functions:
;   FUN_00541640
;   FUN_00547810
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005471f0
        ;   Label: FUN_005471f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005471f1
    LEA EAX,[EBX + 0x2140]              ; 005471f5
    PUSH EAX                            ; 005471fb
    MOV EDX,dword ptr [EBX + 0x2234]    ; 005471fc
    PUSH EDX                            ; 00547202
    LEA EAX,[EBX + 0xe80]               ; 00547203
    PUSH EAX                            ; 00547209
    MOV ECX,dword ptr [ESP + 0x18]      ; 0054720a
    PUSH ECX                            ; 0054720e
    PUSH EBX                            ; 0054720f
    CALL FUN_00547810                   ; 00547210
        ;   XREF to: 00547810 (UNCONDITIONAL_CALL)  ; undefined FUN_00547810()
    ADD ESP,0x4                         ; 00547215
    PUSH EAX                            ; 00547218
    CALL FUN_00541640                   ; 00547219
        ;   XREF to: 00541640 (UNCONDITIONAL_CALL)  ; undefined FUN_00541640()
    ADD ESP,0x14                        ; 0054721e
    MOV EAX,dword ptr [ESP + 0xc]       ; 00547221
    MOV dword ptr [EBX + 0x2230],EAX    ; 00547225
    POP EBX                             ; 0054722b
    RET                                 ; 0054722c

