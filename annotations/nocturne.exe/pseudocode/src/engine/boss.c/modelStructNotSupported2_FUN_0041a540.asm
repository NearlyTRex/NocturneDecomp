; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl engine_boss_c_modelStructNotSupported2_FUN_0041a540(void)
;
;
; XREF[1]:
;   engine_model.c_loadModelFile_FUN_004dcd10 at 004dcecf
;
; Referenced Globals:
;   string s_..\\engine\\boss.c_005795a1
;   string s_modelStruct_not_supported_005795b2
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   FUN_004c8440
;
; *****************************************************************************

section .text

    MOV EDX,0x5795a1                    ; 0041a540 | = "..\\engine\\boss.c"
        ;   Label: engine_boss.c_modelStructNotSupported2_FUN_0041a540
    MOV ECX,0x3a                        ; 0041a545
    PUSH 0x5795b2                       ; 0041a54a | = "modelStruct not supported"
    MOV dword ptr [0x01cc4800],EDX      ; 0041a54f | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 0041a555 | DAT_01cc4804
    CALL FUN_004c8440                   ; 0041a55b
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 0041a560
    XOR EAX,EAX                         ; 0041a563
    RET                                 ; 0041a565

