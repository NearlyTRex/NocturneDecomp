; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_simbox.cpp_FUN_00589270(CSimBox * this_ptr)
;
; Parameters:
; CSimBox *        Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_simbox.cpp_CSimBox_FUN_00589310 at 00589357
;
; Referenced Globals:
;   TerminatedCString s_D_00649c60
;   undefined4 s_emo_00649c61
;   TerminatedCString s_Coffin_Lid_00649c65
;   undefined4 s_offin_Lid_00649c66
;   undefined4 s_ffin_Lid_00649c67
;   undefined4 s_fin_Lid_00649c68
;   TerminatedCString s_Unknown_00649c70
;   undefined4 s_nknown_00649c71
;   undefined4 g_CSimBoxClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00589270
        ;   Label: core_simbox.cpp_FUN_00589270
    PUSH EDI                            ; 00589271
    MOV EDI,dword ptr [ESP + 0x14]      ; 00589272
    MOV EDX,dword ptr [0x03659820]      ; 00589276 | g_CSimBoxClassInfo.name_hash
    PUSH EDX                            ; 0058927c
    MOV ECX,dword ptr [ESP + 0x10]      ; 0058927d
    PUSH ECX                            ; 00589281
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 00589282 | CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EAX + 0x2d4]     ; 00589287
    ADD ESP,0x8                         ; 0058928d
    TEST EAX,EAX                        ; 00589290
    JBE 0x005892bb                      ; 00589292 | LAB_005892bb
        ;   XREF to: 005892bb (CONDITIONAL_JUMP)
    CMP EAX,0x1                         ; 00589294
    JNZ 0x005892c2                      ; 00589297 | LAB_005892c2
        ;   XREF to: 005892c2 (CONDITIONAL_JUMP)
    MOV ESI,0x649c65                    ; 00589299 | = "Coffin Lid" | s_Coffin_Lid_00649c65 = Coffin Lid
    PUSH EDI                            ; 0058929e
        ;   Label: LAB_0058929e
    MOV AL,byte ptr [ESI]               ; 0058929f | = "Coffin Lid" | s_D_00649c60 = Demo | s_Coffin_Lid_00649c65 = Coffin Lid
        ;   Label: LAB_0058929f
    MOV byte ptr [EDI],AL               ; 005892a1
    CMP AL,0x0                          ; 005892a3
    JZ 0x005892b7                       ; 005892a5 | LAB_005892b7
        ;   XREF to: 005892b7 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 005892a7 | s_offin_Lid_00649c66
    ADD ESI,0x2                         ; 005892aa
    MOV byte ptr [EDI + 0x1],AL         ; 005892ad
    ADD EDI,0x2                         ; 005892b0
    CMP AL,0x0                          ; 005892b3
    JNZ 0x0058929f                      ; 005892b5 | LAB_0058929f
        ;   XREF to: 0058929f (CONDITIONAL_JUMP)
    POP EDI                             ; 005892b7
        ;   Label: LAB_005892b7
    POP EDI                             ; 005892b8
    POP ESI                             ; 005892b9
    RET                                 ; 005892ba
    MOV ESI,0x649c60                    ; 005892bb | = "Demo" | s_D_00649c60 = Demo
        ;   Label: LAB_005892bb
    JMP 0x0058929e                      ; 005892c0 | LAB_0058929e
        ;   XREF to: 0058929e (UNCONDITIONAL_JUMP)
    MOV ESI,0x649c70                    ; 005892c2 | = "Unknown" | s_Unknown_00649c70 = Unknown
        ;   Label: LAB_005892c2
    JMP 0x0058929e                      ; 005892c7 | LAB_0058929e
        ;   XREF to: 0058929e (UNCONDITIONAL_JUMP)

