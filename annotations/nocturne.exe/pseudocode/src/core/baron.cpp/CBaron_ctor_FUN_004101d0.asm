; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_baron_cpp_CBaron_ctor_FUN_004101d0(undefined4 param_1)
;
;
; Referenced Globals:
;   string s_baron.dfm_0057850c
;   undefined1 DAT_00578516
;   undefined1 DAT_00578517
;   undefined1 DAT_00578518
;   undefined1 DAT_00578519
;   undefined1 DAT_0057851b
;   undefined1 DAT_0057851c
;   undefined1 DAT_0057851d
;   undefined1 DAT_0057851e
;   string s_baronshell.kfm_00578520
;   undefined1* PTR_core_baron.cpp_CBaron_setup_FUN_004102c0_00599ac4 = 004102c0
;   undefined4 DAT_0076436c
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0
;   FUN_004b46d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004101d0
        ;   Label: core_baron.cpp_CBaron_ctor_FUN_004101d0
    PUSH ESI                            ; 004101d1
    PUSH EDI                            ; 004101d2
    MOV EDX,dword ptr [ESP + 0x10]      ; 004101d3
    PUSH EDX                            ; 004101d7
    CALL FUN_004b46d0                   ; 004101d8
        ;   XREF to: 004b46d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b46d0()
    ADD ESP,0x4                         ; 004101dd
    PUSH 0x57850c                       ; 004101e0 | = "baron.dfm"
    MOV EBX,EAX                         ; 004101e5
    ADD EAX,0x150                       ; 004101e7
    PUSH EAX                            ; 004101ec
    MOV dword ptr [EAX + -0x4],0x599ac4 ; 004101ed | PTR_core_baron.cpp_CBaron_setup_FUN_004102c0_00599ac4
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0 ; 004101f4
        ;   XREF to: 0051e0c0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0()
    LEA EAX,[EBX + 0x1fb04]             ; 004101f9
    MOV dword ptr [EBX + 0x1fb10],0x3f800000 ; 004101ff
    MOV dword ptr [EAX + 0x8],0x0       ; 00410209
    MOV EDX,dword ptr [EAX + 0x8]       ; 00410210
    MOV dword ptr [EAX + 0x4],EDX       ; 00410213
    MOV EDX,dword ptr [EAX + 0x4]       ; 00410216
    MOV dword ptr [EAX],EDX             ; 00410219
    MOV dword ptr [EBX + 0x1fb14],0x0   ; 0041021b
    MOV ESI,0x578516                    ; 00410225 | DAT_00578516
    MOV dword ptr [EBX + 0x1fb18],0x0   ; 0041022a
    ADD ESP,0x8                         ; 00410234
    MOV dword ptr [EBX + 0xfc],0x1      ; 00410237
    LEA EDI,[EBX + 0x1fa3c]             ; 00410241
    MOV dword ptr [EBX + 0x1fb34],0x0   ; 00410247
    PUSH EDI                            ; 00410251
    MOV AL,byte ptr [ESI]               ; 00410252 | DAT_00578516 | DAT_00578518
        ;   Label: LAB_00410252
    MOV byte ptr [EDI],AL               ; 00410254
    CMP AL,0x0                          ; 00410256
    JZ 0x0041026a                       ; 00410258
        ;   XREF to: 0041026a (CONDITIONAL_JUMP)  ; LAB_0041026a
    MOV AL,byte ptr [ESI + 0x1]         ; 0041025a | DAT_00578517 | DAT_00578519
    ADD ESI,0x2                         ; 0041025d
    MOV byte ptr [EDI + 0x1],AL         ; 00410260
    ADD EDI,0x2                         ; 00410263
    CMP AL,0x0                          ; 00410266
    JNZ 0x00410252                      ; 00410268
        ;   XREF to: 00410252 (CONDITIONAL_JUMP)  ; LAB_00410252
    POP EDI                             ; 0041026a
        ;   Label: LAB_0041026a
    MOV ESI,0x57851b                    ; 0041026b | DAT_0057851b
    LEA EDI,[EBX + 0x1faa0]             ; 00410270
    PUSH EDI                            ; 00410276
    MOV AL,byte ptr [ESI]               ; 00410277 | DAT_0057851b | DAT_0057851d
        ;   Label: LAB_00410277
    MOV byte ptr [EDI],AL               ; 00410279
    CMP AL,0x0                          ; 0041027b
    JZ 0x0041028f                       ; 0041027d
        ;   XREF to: 0041028f (CONDITIONAL_JUMP)  ; LAB_0041028f
    MOV AL,byte ptr [ESI + 0x1]         ; 0041027f | DAT_0057851c | DAT_0057851e
    ADD ESI,0x2                         ; 00410282
    MOV byte ptr [EDI + 0x1],AL         ; 00410285
    ADD EDI,0x2                         ; 00410288
    CMP AL,0x0                          ; 0041028b
    JNZ 0x00410277                      ; 0041028d
        ;   XREF to: 00410277 (CONDITIONAL_JUMP)  ; LAB_00410277
    POP EDI                             ; 0041028f
        ;   Label: LAB_0041028f
    PUSH 0x578520                       ; 00410290 | = "baronshell.kfm"
    PUSH 0x76436c                       ; 00410295 | DAT_0076436c
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 0041029a
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580()
    ADD ESP,0x8                         ; 0041029f
    MOV EAX,EBX                         ; 004102a2
    MOV dword ptr [EBX + 0x1fb38],0x0   ; 004102a4
    POP EDI                             ; 004102ae
    POP ESI                             ; 004102af
    POP EBX                             ; 004102b0
    RET                                 ; 004102b1

