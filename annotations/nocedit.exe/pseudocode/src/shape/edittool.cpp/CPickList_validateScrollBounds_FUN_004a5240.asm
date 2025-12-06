; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_edittool.cpp_CPickList_validateScrollBounds_FUN_004a5240(CPickList * this_ptr)
;
; Parameters:
; CPickList *      Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   shape_edittool.cpp_CPickList_handleDialogInput_FUN_004a4340 at 004a4350
;   shape_edittool.cpp_CPickList_initializeDialog_FUN_004a3ef0 at 004a3f13
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a5240
        ;   Label: shape_edittool.cpp_CPickList_validateScrollBounds_FUN_004a5240
    PUSH ESI                            ; 004a5241
    PUSH EDI                            ; 004a5242
    PUSH EBP                            ; 004a5243
    MOV EAX,dword ptr [ESP + 0x14]      ; 004a5244
    MOV ECX,dword ptr [EAX]             ; 004a5248
    CMP ECX,dword ptr [EAX + 0x17c]     ; 004a524a
    JLE 0x004a5287                      ; 004a5250 | LAB_004a5287
        ;   XREF to: 004a5287 (CONDITIONAL_JUMP)
    CMP dword ptr [EAX + 0x17c],0x0     ; 004a5252
        ;   Label: LAB_004a5252
    JL 0x004a5292                       ; 004a5259 | LAB_004a5292
        ;   XREF to: 004a5292 (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [EAX + 0x180]     ; 004a525b
        ;   Label: LAB_004a525b
    TEST ESI,ESI                        ; 004a5261
    JL 0x004a529e                       ; 004a5263 | LAB_004a529e
        ;   XREF to: 004a529e (CONDITIONAL_JUMP)
    MOV EBP,dword ptr [EAX]             ; 004a5265
        ;   Label: LAB_004a5265
    MOV EDX,dword ptr [EAX + 0x180]     ; 004a5267
    CMP EDX,EBP                         ; 004a526d
    JL 0x004a52af                       ; 004a526f | LAB_004a52af
        ;   XREF to: 004a52af (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [EAX + 0x180]     ; 004a5271
    MOV EDX,dword ptr [EAX + 0x188]     ; 004a5277
    SUB EBX,EDX                         ; 004a527d
    MOV dword ptr [EAX + 0x180],EBX     ; 004a527f
    JMP 0x004a5265                      ; 004a5285 | LAB_004a5265
        ;   XREF to: 004a5265 (UNCONDITIONAL_JUMP)
    LEA EDX,[ECX + -0x1]                ; 004a5287
        ;   Label: LAB_004a5287
    MOV dword ptr [EAX + 0x17c],EDX     ; 004a528a
    JMP 0x004a5252                      ; 004a5290 | LAB_004a5252
        ;   XREF to: 004a5252 (UNCONDITIONAL_JUMP)
    MOV dword ptr [EAX + 0x17c],0x0     ; 004a5292
        ;   Label: LAB_004a5292
    JMP 0x004a525b                      ; 004a529c | LAB_004a525b
        ;   XREF to: 004a525b (UNCONDITIONAL_JUMP)
    MOV EDX,dword ptr [EAX + 0x188]     ; 004a529e
        ;   Label: LAB_004a529e
    LEA EDI,[ESI + EDX*0x1]             ; 004a52a4
    MOV dword ptr [EAX + 0x180],EDI     ; 004a52a7
    JMP 0x004a525b                      ; 004a52ad | LAB_004a525b
        ;   XREF to: 004a525b (UNCONDITIONAL_JUMP)
    TEST EDX,EDX                        ; 004a52af
        ;   Label: LAB_004a52af
    JL 0x004a5300                       ; 004a52b1 | LAB_004a5300
        ;   XREF to: 004a5300 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [EAX]             ; 004a52b3
        ;   Label: LAB_004a52b3
    CMP ECX,dword ptr [EAX + 0x17c]     ; 004a52b5
    JLE 0x004a535c                      ; 004a52bb | LAB_004a535c
        ;   XREF to: 004a535c (CONDITIONAL_JUMP)
    XOR ECX,ECX                         ; 004a52c1
    MOV ESI,dword ptr [EAX + 0x180]     ; 004a52c3
        ;   Label: LAB_004a52c3
    CMP ESI,dword ptr [EAX + 0x17c]     ; 004a52c9
    JG 0x004a530c                       ; 004a52cf | LAB_004a530c
        ;   XREF to: 004a530c (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [EAX + 0x184]     ; 004a52d1
        ;   Label: LAB_004a52d1
    MOV EDX,dword ptr [EAX + 0x180]     ; 004a52d7
    MOV EDI,dword ptr [EAX + 0x17c]     ; 004a52dd
    ADD EDX,ESI                         ; 004a52e3
    CMP EDX,EDI                         ; 004a52e5
    JG 0x004a535c                       ; 004a52e7 | LAB_004a535c
        ;   XREF to: 004a535c (CONDITIONAL_JUMP)
    MOV EBP,dword ptr [EAX + 0x190]     ; 004a52ed
    CMP EBP,0x1                         ; 004a52f3
    JNZ 0x004a5343                      ; 004a52f6 | LAB_004a5343
        ;   XREF to: 004a5343 (CONDITIONAL_JUMP)
    ADD dword ptr [EAX + 0x180],EBP     ; 004a52f8
    JMP 0x004a52d1                      ; 004a52fe | LAB_004a52d1
        ;   XREF to: 004a52d1 (UNCONDITIONAL_JUMP)
    MOV dword ptr [EAX + 0x180],0x0     ; 004a5300
        ;   Label: LAB_004a5300
    JMP 0x004a52b3                      ; 004a530a | LAB_004a52b3
        ;   XREF to: 004a52b3 (UNCONDITIONAL_JUMP)
    MOV EDI,dword ptr [EAX + 0x190]     ; 004a530c
        ;   Label: LAB_004a530c
    CMP EDI,0x1                         ; 004a5312
    JNZ 0x004a5331                      ; 004a5315 | LAB_004a5331
        ;   XREF to: 004a5331 (CONDITIONAL_JUMP)
    MOV EDX,ESI                         ; 004a5317
    SUB EDX,EDI                         ; 004a5319
    MOV dword ptr [EAX + 0x180],EDX     ; 004a531b
    CMP ECX,dword ptr [EAX + 0x180]     ; 004a5321
        ;   Label: LAB_004a5321
    JLE 0x004a52c3                      ; 004a5327 | LAB_004a52c3
        ;   XREF to: 004a52c3 (CONDITIONAL_JUMP)
    MOV dword ptr [EAX + 0x180],ECX     ; 004a5329
    JMP 0x004a52c3                      ; 004a532f | LAB_004a52c3
        ;   XREF to: 004a52c3 (UNCONDITIONAL_JUMP)
    MOV EBP,ESI                         ; 004a5331
        ;   Label: LAB_004a5331
    MOV EDX,dword ptr [EAX + 0x188]     ; 004a5333
    SUB EBP,EDX                         ; 004a5339
    MOV dword ptr [EAX + 0x180],EBP     ; 004a533b
    JMP 0x004a5321                      ; 004a5341 | LAB_004a5321
        ;   XREF to: 004a5321 (UNCONDITIONAL_JUMP)
    MOV ECX,dword ptr [EAX + 0x180]     ; 004a5343
        ;   Label: LAB_004a5343
    MOV EDX,dword ptr [EAX + 0x188]     ; 004a5349
    ADD ECX,EDX                         ; 004a534f
    MOV dword ptr [EAX + 0x180],ECX     ; 004a5351
    JMP 0x004a52d1                      ; 004a5357 | LAB_004a52d1
        ;   XREF to: 004a52d1 (UNCONDITIONAL_JUMP)
    CMP dword ptr [EAX + 0x190],0x1     ; 004a535c
        ;   Label: LAB_004a535c
    JNZ 0x004a537f                      ; 004a5363 | LAB_004a537f
        ;   XREF to: 004a537f (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [EAX + 0x188]     ; 004a5365
    MOV EDX,dword ptr [EAX]             ; 004a536b
    MOV EBP,dword ptr [EAX + 0x180]     ; 004a536d
    SUB EDX,EDI                         ; 004a5373
    CMP EDX,EBP                         ; 004a5375
    JGE 0x004a537f                      ; 004a5377 | LAB_004a537f
        ;   XREF to: 004a537f (CONDITIONAL_JUMP)
    MOV dword ptr [EAX + 0x180],EDX     ; 004a5379
    CMP dword ptr [EAX + 0x180],0x0     ; 004a537f
        ;   Label: LAB_004a537f
    JL 0x004a538d                       ; 004a5386 | LAB_004a538d
        ;   XREF to: 004a538d (CONDITIONAL_JUMP)
    POP EBP                             ; 004a5388
    POP EDI                             ; 004a5389
    POP ESI                             ; 004a538a
    POP EBX                             ; 004a538b
    RET                                 ; 004a538c
    MOV dword ptr [EAX + 0x180],0x0     ; 004a538d
        ;   Label: LAB_004a538d
    POP EBP                             ; 004a5397
    POP EDI                             ; 004a5398
    POP ESI                             ; 004a5399
    POP EBX                             ; 004a539a
    RET                                 ; 004a539b

