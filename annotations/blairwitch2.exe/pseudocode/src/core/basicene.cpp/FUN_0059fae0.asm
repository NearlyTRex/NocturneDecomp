; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_basicene_cpp_FUN_0059fae0(CDemonActor *param_1)
;
; Local Variables:
; undefined8       Stack[-0x3c]:8  local_3c
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined        Stack[-0x28]:1  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_basicene.cpp_CBasicEnemy_renderOpaque_FUN_0059fa20 at 0059fa60
;
; Referenced Globals:
;   undefined4 s_s_s_s_0_2f_005ef9ce+1
;   undefined4 DAT_005febc0
;   undefined4 DAT_0060b280
;   undefined4 DAT_01ba5c50
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0
;   core_motion.cpp_FUN_005035c0
;   core_muzzle.cpp_FUN_0059db70
;   core_xform.cpp_FUN_00592720
;   crt_unknown.c_sprintf_FUN_005b7790
;   engine_2d.c_drawText_FUN_00401fe0
;   engine_special.cpp_FUN_0055d723
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059fae0
        ;   Label: core_basicene.cpp_FUN_0059fae0
    PUSH ESI                            ; 0059fae1
    PUSH EDI                            ; 0059fae2
    PUSH EBP                            ; 0059fae3
    MOV EBP,ESP                         ; 0059fae4
    SUB ESP,0x24                        ; 0059fae6
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059fae9
    CMP dword ptr [EAX + 0x1137c],-0x1  ; 0059faec
    JNZ 0x0059fafc                      ; 0059faf3
        ;   XREF to: 0059fafc (CONDITIONAL_JUMP)  ; LAB_0059fafc
    MOV ESP,EBP                         ; 0059faf5
    POP EBP                             ; 0059faf7
    POP EDI                             ; 0059faf8
    POP ESI                             ; 0059faf9
    POP EBX                             ; 0059fafa
    RET                                 ; 0059fafb
    PUSH EAX                            ; 0059fafc
        ;   Label: LAB_0059fafc
    MOV EBX,dword ptr [EBP + 0x14]      ; 0059fafd
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0 ; 0059fb00
        ;   XREF to: 004089d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0(CDemonActor * this_ptr)
    MOV EBX,dword ptr [EBX + 0x1137c]   ; 0059fb05
    LEA EAX,[EBX*0x4 + 0x0]             ; 0059fb0b
    SUB EAX,EBX                         ; 0059fb12
    MOV EBX,dword ptr [EBP + 0x14]      ; 0059fb14
    SHL EAX,0x4                         ; 0059fb17
    ADD EBX,0x1134                      ; 0059fb1a
    ADD ESP,0x4                         ; 0059fb20
    ADD EAX,EBX                         ; 0059fb23
    LEA ESI,[EBP + -0x18]               ; 0059fb25
    PUSH EAX                            ; 0059fb28
    LEA EDI,[EBP + -0xc]                ; 0059fb29
    LEA EBX,[EBP + -0x24]               ; 0059fb2c
    CALL core_xform.cpp_FUN_00592720    ; 0059fb2f
        ;   XREF to: 00592720 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00592720()
    LEA ESI,[EBP + -0x18]               ; 0059fb34
    FLD1                                ; 0059fb37
    LEA EAX,[EBP + -0xc]                ; 0059fb39
    MOVSD ES:EDI,ESI                    ; 0059fb3c
    MOVSD ES:EDI,ESI                    ; 0059fb3d
    MOVSD ES:EDI,ESI                    ; 0059fb3e
    ADD ESP,0x4                         ; 0059fb3f
    FADD float ptr [EBP + -0x8]         ; 0059fb42
    MOV ESI,dword ptr [0x0060b280]      ; 0059fb45 | DAT_0060b280
    FSTP float ptr [EBP + -0x8]         ; 0059fb4b
    FLD float ptr [EAX]                 ; 0059fb4e
    FMUL float ptr [0x005febc0]         ; 0059fb50 | DAT_005febc0
    FISTP dword ptr [EBX]               ; 0059fb56
    FLD float ptr [EAX + 0x4]           ; 0059fb58
    FMUL float ptr [0x005febc0]         ; 0059fb5b | DAT_005febc0
    FISTP dword ptr [EBX + 0x4]         ; 0059fb61
    FLD float ptr [EAX + 0x8]           ; 0059fb64
    FMUL float ptr [0x005febc0]         ; 0059fb67 | DAT_005febc0
    FISTP dword ptr [EBX + 0x8]         ; 0059fb6d
    LEA EAX,[EBP + -0x24]               ; 0059fb70
    PUSH EAX                            ; 0059fb73
    MOV EAX,dword ptr [ESI]             ; 0059fb74 | DAT_01ba5c50
    PUSH EAX                            ; 0059fb76
    CALL engine_special.cpp_FUN_0055d723 ; 0059fb77
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    MOV EBX,dword ptr [0x0060b280]      ; 0059fb7c | DAT_0060b280
    MOV EBX,dword ptr [EBX]             ; 0059fb82 | DAT_01ba5c50
    MOV AH,byte ptr [EBX + 0x13]        ; 0059fb84
    ADD ESP,0x8                         ; 0059fb87
    TEST AH,0x80                        ; 0059fb8a
    JNZ 0x0059fbf0                      ; 0059fb8d
        ;   XREF to: 0059fbf0 (CONDITIONAL_JUMP)  ; LAB_0059fbf0
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059fb8f
    SUB ESP,0x8                         ; 0059fb92
    FLD float ptr [EAX + 0x113c4]       ; 0059fb95
    ADD EAX,0x2b4                       ; 0059fb9b
    FSTP double ptr [ESP]               ; 0059fba0
    PUSH EAX                            ; 0059fba3
    CALL core_motion.cpp_FUN_005035c0   ; 0059fba4
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    ADD ESP,0x4                         ; 0059fba9
    PUSH EAX                            ; 0059fbac
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059fbad
    ADD EAX,0x10af8                     ; 0059fbb0
    PUSH EAX                            ; 0059fbb5
    CALL core_muzzle.cpp_FUN_0059db70   ; 0059fbb6
        ;   XREF to: 0059db70 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059db70()
    ADD ESP,0x4                         ; 0059fbbb
    PUSH EAX                            ; 0059fbbe
    MOV ESI,dword ptr [EBP + 0x14]      ; 0059fbbf
    PUSH ESI                            ; 0059fbc2
    PUSH 0x5ef9cf                       ; 0059fbc3 | s_s_s_s_0_2f_005ef9ce+1
    PUSH 0x2668360                      ; 0059fbc8
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 0059fbcd
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    MOV EAX,dword ptr [EBX + 0x14]      ; 0059fbd2
    ADD ESP,0x1c                        ; 0059fbd5
    SAR EAX,0x10                        ; 0059fbd8
    PUSH EAX                            ; 0059fbdb
    MOV EAX,dword ptr [EBX + 0x10]      ; 0059fbdc
    SAR EAX,0x10                        ; 0059fbdf
    PUSH EAX                            ; 0059fbe2
    PUSH 0x2668360                      ; 0059fbe3
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 0059fbe8
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0059fbed
    MOV EDI,dword ptr [EBP + 0x14]      ; 0059fbf0
        ;   Label: LAB_0059fbf0
    PUSH EDI                            ; 0059fbf3
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10 ; 0059fbf4
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0059fbf9
    MOV ESP,EBP                         ; 0059fbfc
    POP EBP                             ; 0059fbfe
    POP EDI                             ; 0059fbff
    POP ESI                             ; 0059fc00
    POP EBX                             ; 0059fc01
    RET                                 ; 0059fc02

