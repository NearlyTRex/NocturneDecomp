; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_flashlit_cpp_FUN_004a8180(int param_1,int param_2)
;
;
; XREF[2]:
;   core_fldnotes.cpp_CFieldNotes_draw_FUN_004abe00 at 004ac003
;   core_fldnotes.cpp_CFieldNotes_process_FUN_004ac6b0 at 004ac827
;
; Referenced Globals:
;   undefined4 DAT_005fe378
;   undefined4 DAT_005fe37c
;   undefined4 DAT_005fe380
;   undefined4 DAT_005fe384
;   undefined4 DAT_01d19ba8
;   undefined4 CAlphaBitmap_01d19c9c.width
;   undefined4 CAlphaBitmap_01d19c9c.height
;   undefined4 CAlphaBitmap_01d19cb0.width
;   undefined4 CAlphaBitmap_01d19cb0.height
;   undefined4 g_STextViewInstance.page_count
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a8180
        ;   Label: core_flashlit.cpp_FUN_004a8180
    PUSH ESI                            ; 004a8181
    PUSH EDI                            ; 004a8182
    PUSH EBP                            ; 004a8183
    MOV ECX,dword ptr [ESP + 0x14]      ; 004a8184
    MOV EDX,dword ptr [ESP + 0x18]      ; 004a8188
    CMP dword ptr [0x01d19ba8],0x0      ; 004a818c | DAT_01d19ba8
    JLE 0x004a81c3                      ; 004a8193
        ;   XREF to: 004a81c3 (CONDITIONAL_JUMP)  ; LAB_004a81c3
    MOV ESI,dword ptr [0x005fe378]      ; 004a8195 | DAT_005fe378
    CMP ECX,ESI                         ; 004a819b
    JL 0x004a81c3                       ; 004a819d
        ;   XREF to: 004a81c3 (CONDITIONAL_JUMP)  ; LAB_004a81c3
    MOV EDI,dword ptr [0x005fe37c]      ; 004a819f | DAT_005fe37c
    CMP EDX,EDI                         ; 004a81a5
    JL 0x004a81c3                       ; 004a81a7
        ;   XREF to: 004a81c3 (CONDITIONAL_JUMP)  ; LAB_004a81c3
    MOV EBP,dword ptr [0x01d19ca8]      ; 004a81a9 | CAlphaBitmap_01d19c9c.width
    LEA EAX,[ESI + EBP*0x1]             ; 004a81af
    CMP ECX,EAX                         ; 004a81b2
    JGE 0x004a81c3                      ; 004a81b4
        ;   XREF to: 004a81c3 (CONDITIONAL_JUMP)  ; LAB_004a81c3
    MOV EBX,dword ptr [0x01d19cac]      ; 004a81b6 | CAlphaBitmap_01d19c9c.height
    LEA EAX,[EDI + EBX*0x1]             ; 004a81bc
    CMP EDX,EAX                         ; 004a81bf
    JL 0x004a820d                       ; 004a81c1
        ;   XREF to: 004a820d (CONDITIONAL_JUMP)  ; LAB_004a820d
    MOV EAX,[0x01d19d68]                ; 004a81c3 | g_STextViewInstance.page_count
        ;   Label: LAB_004a81c3
    MOV ESI,dword ptr [0x01d19ba8]      ; 004a81c8 | DAT_01d19ba8
    SUB EAX,0x2                         ; 004a81ce
    CMP EAX,ESI                         ; 004a81d1
    JLE 0x004a8217                      ; 004a81d3
        ;   XREF to: 004a8217 (CONDITIONAL_JUMP)  ; LAB_004a8217
    MOV EDI,dword ptr [0x005fe380]      ; 004a81d5 | DAT_005fe380
    CMP ECX,EDI                         ; 004a81db
    JL 0x004a8217                       ; 004a81dd
        ;   XREF to: 004a8217 (CONDITIONAL_JUMP)  ; LAB_004a8217
    MOV EBP,dword ptr [0x005fe384]      ; 004a81df | DAT_005fe384
    CMP EDX,EBP                         ; 004a81e5
    JL 0x004a8217                       ; 004a81e7
        ;   XREF to: 004a8217 (CONDITIONAL_JUMP)  ; LAB_004a8217
    MOV EBX,dword ptr [0x01d19cbc]      ; 004a81e9 | CAlphaBitmap_01d19cb0.width
    LEA EAX,[EDI + EBX*0x1]             ; 004a81ef
    CMP ECX,EAX                         ; 004a81f2
    JGE 0x004a8217                      ; 004a81f4
        ;   XREF to: 004a8217 (CONDITIONAL_JUMP)  ; LAB_004a8217
    MOV ESI,dword ptr [0x01d19cc0]      ; 004a81f6 | CAlphaBitmap_01d19cb0.height
    LEA EAX,[ESI + EBP*0x1]             ; 004a81fc
    CMP EDX,EAX                         ; 004a81ff
    JGE 0x004a8217                      ; 004a8201
        ;   XREF to: 004a8217 (CONDITIONAL_JUMP)  ; LAB_004a8217
    MOV EAX,0x1                         ; 004a8203
    POP EBP                             ; 004a8208
    POP EDI                             ; 004a8209
    POP ESI                             ; 004a820a
    POP EBX                             ; 004a820b
    RET                                 ; 004a820c
    MOV EAX,0xffffffff                  ; 004a820d
        ;   Label: LAB_004a820d
    POP EBP                             ; 004a8212
    POP EDI                             ; 004a8213
    POP ESI                             ; 004a8214
    POP EBX                             ; 004a8215
    RET                                 ; 004a8216
    XOR EAX,EAX                         ; 004a8217
        ;   Label: LAB_004a8217
    POP EBP                             ; 004a8219
    POP EDI                             ; 004a821a
    POP ESI                             ; 004a821b
    POP EBX                             ; 004a821c
    RET                                 ; 004a821d

