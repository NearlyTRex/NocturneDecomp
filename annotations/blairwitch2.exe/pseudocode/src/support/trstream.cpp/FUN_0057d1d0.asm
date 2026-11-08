; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0057d1d0(int param_1)
;
;
; XREF[3]:
;   FUN_0057d320 at 0057d36b
;   FUN_0057d390 at 0057d41d
;   FUN_0057d450 at 0057d4c1
;
; Referenced Globals:
;   TerminatedCString s_support_trstream_cpp_005ed551
;   TerminatedCString s_Out_of_memory_005ed569
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_004e4500
;   FUN_0057d240
;   FUN_005b8580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057d1d0
        ;   Label: FUN_0057d1d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0057d1d1
    PUSH EBX                            ; 0057d1d5
    CALL FUN_0057d240                   ; 0057d1d6
        ;   XREF to: 0057d240 (UNCONDITIONAL_CALL)  ; undefined FUN_0057d240()
    MOV dword ptr [EBX + 0x20],0x1000   ; 0057d1db
    MOV EAX,dword ptr [EBX + 0x20]      ; 0057d1e2
    ADD ESP,0x4                         ; 0057d1e5
    ADD EAX,0x1f                        ; 0057d1e8
    PUSH EAX                            ; 0057d1eb
    CALL FUN_005b8580                   ; 0057d1ec
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8580()
    ADD ESP,0x4                         ; 0057d1f1
    MOV dword ptr [EBX + 0x14],EAX      ; 0057d1f4
    TEST EAX,EAX                        ; 0057d1f7
    JZ 0x0057d216                       ; 0057d1f9
        ;   XREF to: 0057d216 (CONDITIONAL_JUMP)  ; LAB_0057d216
    MOV EAX,dword ptr [EBX + 0x14]      ; 0057d1fb
        ;   Label: LAB_0057d1fb
    MOV dword ptr [EBX + 0x1c],0x0      ; 0057d1fe
    ADD EAX,0x1f                        ; 0057d205
    MOV dword ptr [EBX + 0x24],0x0      ; 0057d208
    AND AL,0xe0                         ; 0057d20f
    MOV dword ptr [EBX + 0x18],EAX      ; 0057d211
    POP EBX                             ; 0057d214
    RET                                 ; 0057d215
    PUSH ESI                            ; 0057d216
        ;   Label: LAB_0057d216
    MOV ECX,0x5ed551                    ; 0057d217 | = "..\\support\\trstream.cpp"
    MOV ESI,0x605                       ; 0057d21c
    PUSH 0x5ed569                       ; 0057d221 | = "Out of memory"
    MOV dword ptr [0x01d046a0],ECX      ; 0057d226 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 0057d22c | DAT_01d046a4
    CALL FUN_004e4500                   ; 0057d232
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 0057d237
    POP ESI                             ; 0057d23a
    JMP 0x0057d1fb                      ; 0057d23b
        ;   XREF to: 0057d1fb (UNCONDITIONAL_JUMP)  ; LAB_0057d1fb

