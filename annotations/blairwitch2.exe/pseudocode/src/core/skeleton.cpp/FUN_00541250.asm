; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 FUN_00541250(int *param_1,int param_2,int *param_3,int param_4,int param_5)
;
;
; XREF[1]:
;   FUN_00542850 at 0054295b
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_005e6b6c
;   TerminatedCString s_Too_many_texture_sets_in_005e6b81
;   TerminatedCString s_core_skeleton_cpp_005e6bd3
;   TerminatedCString s_Too_many_textures_in_CDe_005e6be8
;   TerminatedCString s_core_skeleton_cpp_005e6c36
;   TerminatedCString s_Too_many_parts_in_CDefor_005e6c4b
;   TerminatedCString s_core_skeleton_cpp_005e6c96
;   TerminatedCString s_Too_many_LODs_in_CDeform_005e6cab
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_004e4500
;   FUN_00541160
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00541250
        ;   Label: FUN_00541250
    PUSH ESI                            ; 00541251
    PUSH EDI                            ; 00541252
    PUSH EBP                            ; 00541253
    MOV EBX,dword ptr [ESP + 0x14]      ; 00541254
    MOV EDI,dword ptr [ESP + 0x18]      ; 00541258
    MOV ESI,dword ptr [ESP + 0x20]      ; 0054125c
    MOV EBP,dword ptr [ESP + 0x24]      ; 00541260
    PUSH EBX                            ; 00541264
    CALL FUN_00541160                   ; 00541265
        ;   XREF to: 00541160 (UNCONDITIONAL_CALL)  ; undefined FUN_00541160()
    ADD ESP,0x4                         ; 0054126a
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0054126d
    CMP EDX,0x5                         ; 00541271
    JG 0x00541345                       ; 00541274
        ;   XREF to: 00541345 (CONDITIONAL_JUMP)  ; LAB_00541345
    CMP ESI,0x8                         ; 0054127a
        ;   Label: LAB_0054127a
    JLE 0x005412a4                      ; 0054127d
        ;   XREF to: 005412a4 (CONDITIONAL_JUMP)  ; LAB_005412a4
    PUSH ESI                            ; 0054127f
    PUSH 0x8                            ; 00541280
    MOV ECX,0x5e6bd3                    ; 00541282 | = "..\\core\\skeleton.cpp"
    MOV EAX,0x274                       ; 00541287
    PUSH 0x5e6be8                       ; 0054128c | = "Too many textures in CDeformableModel..."
    MOV dword ptr [0x01d046a0],ECX      ; 00541291 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 00541297 | DAT_01d046a4
    CALL FUN_004e4500                   ; 0054129c
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0xc                         ; 005412a1
    CMP EBP,0x1e                        ; 005412a4
        ;   Label: LAB_005412a4
    JLE 0x005412cf                      ; 005412a7
        ;   XREF to: 005412cf (CONDITIONAL_JUMP)  ; LAB_005412cf
    PUSH EBP                            ; 005412a9
    PUSH 0x1e                           ; 005412aa
    MOV EDX,0x5e6c36                    ; 005412ac | = "..\\core\\skeleton.cpp"
    MOV ECX,0x278                       ; 005412b1
    PUSH 0x5e6c4b                       ; 005412b6 | = "Too many parts in CDeformableModel::a..."
    MOV dword ptr [0x01d046a0],EDX      ; 005412bb | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 005412c1 | DAT_01d046a4
    CALL FUN_004e4500                   ; 005412c7
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0xc                         ; 005412cc
    CMP EDI,0x5                         ; 005412cf
        ;   Label: LAB_005412cf
    JLE 0x005412f9                      ; 005412d2
        ;   XREF to: 005412f9 (CONDITIONAL_JUMP)  ; LAB_005412f9
    PUSH EDI                            ; 005412d4
    PUSH 0x5                            ; 005412d5
    MOV EAX,0x5e6c96                    ; 005412d7 | = "..\\core\\skeleton.cpp"
    MOV EDX,0x27c                       ; 005412dc
    PUSH 0x5e6cab                       ; 005412e1 | = "Too many LODs in CDeformableModel::al..."
    MOV [0x01d046a0],EAX                ; 005412e6 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 005412eb | DAT_01d046a4
    CALL FUN_004e4500                   ; 005412f1
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0xc                         ; 005412f6
    MOV dword ptr [EBX + 0xbc],ESI      ; 005412f9
        ;   Label: LAB_005412f9
    MOV dword ptr [EBX + 0xc00],EBP     ; 005412ff
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00541305
    MOV dword ptr [EBX],EDI             ; 00541309
    XOR EDX,EDX                         ; 0054130b
    MOV dword ptr [EBX + 0xb8],EAX      ; 0054130d
    TEST EDI,EDI                        ; 00541313
    JLE 0x00541340                      ; 00541315
        ;   XREF to: 00541340 (CONDITIONAL_JUMP)  ; LAB_00541340
    MOV EAX,EBX                         ; 00541317
    MOV dword ptr [EAX + 0x4],0x1       ; 00541319
        ;   Label: LAB_00541319
    MOV dword ptr [EAX + 0x8],0x0       ; 00541320
    INC EDX                             ; 00541327
    MOV ESI,dword ptr [EBX]             ; 00541328
    ADD EAX,0x8                         ; 0054132a
    CMP EDX,ESI                         ; 0054132d
    JL 0x00541319                       ; 0054132f
        ;   XREF to: 00541319 (CONDITIONAL_JUMP)  ; LAB_00541319
    LEA EAX,[EAX]                       ; 00541331
    LEA EDX,[EDX]                       ; 00541337
    LEA EAX,[EAX]                       ; 0054133d
    POP EBP                             ; 00541340
        ;   Label: LAB_00541340
    POP EDI                             ; 00541341
    POP ESI                             ; 00541342
    POP EBX                             ; 00541343
    RET                                 ; 00541344
    PUSH EDX                            ; 00541345
        ;   Label: LAB_00541345
    PUSH 0x5                            ; 00541346
    MOV ECX,0x5e6b6c                    ; 00541348 | = "..\\core\\skeleton.cpp"
    MOV EAX,0x270                       ; 0054134d
    PUSH 0x5e6b81                       ; 00541352 | = "Too many texture sets in CDeformableM..."
    MOV dword ptr [0x01d046a0],ECX      ; 00541357 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 0054135d | DAT_01d046a4
    CALL FUN_004e4500                   ; 00541362
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0xc                         ; 00541367
    JMP 0x0054127a                      ; 0054136a
        ;   XREF to: 0054127a (UNCONDITIONAL_JUMP)  ; LAB_0054127a

