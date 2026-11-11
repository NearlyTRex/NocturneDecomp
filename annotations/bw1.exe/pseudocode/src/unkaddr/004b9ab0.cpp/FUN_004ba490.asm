; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int unkaddr_004b9ab0_cpp_FUN_004ba490(int param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_fldnotes.cpp_FUN_004be0f0 at 004be291
;   core_fldnotes.cpp_FUN_004be970 at 004beaaf
;
; Referenced Globals:
;   undefined4 DAT_01cc4470
;   undefined4 SNotesSection_ARRAY_01cc4474[0].first_page
;   undefined4 SNotesSection_ARRAY_01cc4474[0].page_count
;   undefined4 SNotesSection_ARRAY_01cc4474[0].tab_x
;   undefined4 SNotesSection_ARRAY_01cc4474[0].tab_y
;   undefined4 SNotesSection_ARRAY_01cc4474[1].first_page
;   undefined4 SNotesSection_ARRAY_01cc4474[1].page_count
;   undefined4 SNotesSection_ARRAY_01cc4474[1].tab_x
;   undefined4 SNotesSection_ARRAY_01cc4474[1].tab_y
;   undefined4 DAT_01cc7b90
;   undefined4 CAlphaBitmap_ARRAY_01cc7ba8[1].width
;   undefined4 CAlphaBitmap_ARRAY_01cc7ba8[1].height
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ba490
        ;   Label: unkaddr_004b9ab0.cpp_FUN_004ba490
    PUSH ESI                            ; 004ba491
    PUSH EDI                            ; 004ba492
    PUSH EBP                            ; 004ba493
    SUB ESP,0x8                         ; 004ba494
    MOV ECX,dword ptr [0x01cc4470]      ; 004ba497 | DAT_01cc4470
    XOR EDX,EDX                         ; 004ba49d
    TEST ECX,ECX                        ; 004ba49f
    JLE 0x004ba51f                      ; 004ba4a1
        ;   XREF to: 004ba51f (CONDITIONAL_JUMP)  ; LAB_004ba51f
    MOV EAX,0x1cc4474                   ; 004ba4a7
    XOR ECX,ECX                         ; 004ba4ac
    IMUL ESI,EDX,0x2e4                  ; 004ba4ae
        ;   Label: LAB_004ba4ae
    MOV EBX,dword ptr [ESI + 0x1cc45bc] ; 004ba4b4 | SNotesSection_ARRAY_01cc4474[0].tab_x | SNotesSection_ARRAY_01cc4474[1].tab_x
    MOV EBP,dword ptr [ESI + 0x1cc45c0] ; 004ba4ba | SNotesSection_ARRAY_01cc4474[0].tab_y | SNotesSection_ARRAY_01cc4474[1].tab_y
    MOV ESI,dword ptr [ECX + 0x1cc7bb4] ; 004ba4c0 | CAlphaBitmap_ARRAY_01cc7ba8[1].width
    ADD ESI,EBX                         ; 004ba4c6
    MOV dword ptr [ESP + 0x4],ESI       ; 004ba4c8
    MOV ESI,dword ptr [ECX + 0x1cc7bb8] ; 004ba4cc | CAlphaBitmap_ARRAY_01cc7ba8[1].height
    ADD ESI,EBP                         ; 004ba4d2
    MOV EDI,dword ptr [0x01cc7b90]      ; 004ba4d4 | DAT_01cc7b90
    MOV dword ptr [ESP],ESI             ; 004ba4da
    MOV ESI,dword ptr [EAX + 0x140]     ; 004ba4dd | SNotesSection_ARRAY_01cc4474[0].first_page | SNotesSection_ARRAY_01cc4474[1].first_page
    CMP EDI,ESI                         ; 004ba4e3
    JL 0x004ba52c                       ; 004ba4e5
        ;   XREF to: 004ba52c (CONDITIONAL_JUMP)  ; LAB_004ba52c
    ADD ESI,dword ptr [EAX + 0x144]     ; 004ba4e7 | SNotesSection_ARRAY_01cc4474[0].page_count | SNotesSection_ARRAY_01cc4474[1].page_count
    CMP ESI,EDI                         ; 004ba4ed
    JLE 0x004ba52c                      ; 004ba4ef
        ;   XREF to: 004ba52c (CONDITIONAL_JUMP)  ; LAB_004ba52c
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004ba4f1
        ;   Label: LAB_004ba4f1
    CMP EBX,EDI                         ; 004ba4f5
    JG 0x004ba50c                       ; 004ba4f7
        ;   XREF to: 004ba50c (CONDITIONAL_JUMP)  ; LAB_004ba50c
    MOV EBX,dword ptr [ESP + 0x20]      ; 004ba4f9
    CMP EBP,EBX                         ; 004ba4fd
    JG 0x004ba50c                       ; 004ba4ff
        ;   XREF to: 004ba50c (CONDITIONAL_JUMP)  ; LAB_004ba50c
    CMP EDI,dword ptr [ESP + 0x4]       ; 004ba501
    JGE 0x004ba50c                      ; 004ba505
        ;   XREF to: 004ba50c (CONDITIONAL_JUMP)  ; LAB_004ba50c
    CMP EBX,dword ptr [ESP]             ; 004ba507
    JL 0x004ba533                       ; 004ba50a
        ;   XREF to: 004ba533 (CONDITIONAL_JUMP)  ; LAB_004ba533
    MOV EBX,dword ptr [0x01cc4470]      ; 004ba50c | DAT_01cc4470
        ;   Label: LAB_004ba50c
    ADD EAX,0x2e4                       ; 004ba512
    INC EDX                             ; 004ba517
    ADD ECX,0x14                        ; 004ba518
    CMP EDX,EBX                         ; 004ba51b
    JL 0x004ba4ae                       ; 004ba51d
        ;   XREF to: 004ba4ae (CONDITIONAL_JUMP)  ; LAB_004ba4ae
    MOV EAX,0xffffffff                  ; 004ba51f
        ;   Label: LAB_004ba51f
    ADD ESP,0x8                         ; 004ba524
    POP EBP                             ; 004ba527
    POP EDI                             ; 004ba528
    POP ESI                             ; 004ba529
    POP EBX                             ; 004ba52a
    RET                                 ; 004ba52b
    MOV EBX,0x246                       ; 004ba52c
        ;   Label: LAB_004ba52c
    JMP 0x004ba4f1                      ; 004ba531
        ;   XREF to: 004ba4f1 (UNCONDITIONAL_JUMP)  ; LAB_004ba4f1
    MOV EAX,EDX                         ; 004ba533
        ;   Label: LAB_004ba533
    ADD ESP,0x8                         ; 004ba535
    POP EBP                             ; 004ba538
    POP EDI                             ; 004ba539
    POP ESI                             ; 004ba53a
    POP EBX                             ; 004ba53b
    RET                                 ; 004ba53c

