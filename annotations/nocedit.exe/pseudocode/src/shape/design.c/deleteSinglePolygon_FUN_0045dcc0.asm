; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_design_c_deleteSinglePolygon_FUN_0045dcc0(void)
;
; Local Variables:
; char[80]         Stack[-0x6c]:80  local_6c
; int              Stack[-0x1c]:4  local_1c
; int              Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_design.c_showFacetPartEditor_FUN_0045f1d0 at 00460874
;
; Referenced Globals:
;   TerminatedCString s_Polygon_to_delete_0061b448
;   int g_PolygonCount
;   SShapeEditorPolygon[20000] g_ModelPolygonData
;   undefined4 g_ModelPolygonData[0].texture_name[0]
;
; Called Functions:
;   crt_stdlib.c_atoi_FUN_005ffef0
;   engine_2d.c_clearInputAndWait_FUN_00403260
;   engine_2d.c_getInputWithPrompt_FUN_004032c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045dcc0
        ;   Label: shape_design.c_deleteSinglePolygon_FUN_0045dcc0
    PUSH ESI                            ; 0045dcc1
    PUSH EDI                            ; 0045dcc2
    PUSH EBP                            ; 0045dcc3
    MOV EBP,ESP                         ; 0045dcc4
    SUB ESP,0x5c                        ; 0045dcc6
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 0045dccc
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    MOV ECX,0x61b448                    ; 0045dcd1 | = "Polygon # to delete : "
    PUSH ECX                            ; 0045dcd6 | = "Polygon # to delete : "
    PUSH 0x0                            ; 0045dcd7
    PUSH 0x0                            ; 0045dcd9
    PUSH 0x14                           ; 0045dcdb
    LEA ECX,[EBP + -0x5c]               ; 0045dcdd
    PUSH ECX                            ; 0045dce0
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 0045dce1
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
    ADD ESP,0x14                        ; 0045dce6
    LEA EDI,[EBP + -0x5c]               ; 0045dce9
    SUB ECX,ECX                         ; 0045dcec
    DEC ECX                             ; 0045dcee
    XOR EAX,EAX                         ; 0045dcef
    SCASB.REPNE ES:EDI                  ; 0045dcf1
    NOT ECX                             ; 0045dcf3
    DEC ECX                             ; 0045dcf5
    TEST ECX,ECX                        ; 0045dcf6
    JBE 0x0045dd61                      ; 0045dcf8
        ;   XREF to: 0045dd61 (CONDITIONAL_JUMP)  ; LAB_0045dd61
    LEA EAX,[EBP + -0x5c]               ; 0045dcfa
    PUSH EAX                            ; 0045dcfd
    CALL crt_stdlib.c_atoi_FUN_005ffef0 ; 0045dcfe
        ;   XREF to: 005ffef0 (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_atoi_FUN_005ffef0(char * string_ptr)
    ADD ESP,0x4                         ; 0045dd03
    MOV dword ptr [EBP + -0x4],EAX      ; 0045dd06
    CMP dword ptr [EBP + -0x4],0x0      ; 0045dd09
    JL 0x0045dd1a                       ; 0045dd0d
        ;   XREF to: 0045dd1a (CONDITIONAL_JUMP)  ; LAB_0045dd1a
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045dd0f
    CMP EAX,dword ptr [0x016e990c]      ; 0045dd12 | g_PolygonCount
    JL 0x0045dd1c                       ; 0045dd18
        ;   XREF to: 0045dd1c (CONDITIONAL_JUMP)  ; LAB_0045dd1c
    JMP 0x0045dd61                      ; 0045dd1a
        ;   XREF to: 0045dd61 (UNCONDITIONAL_JUMP)  ; LAB_0045dd61
        ;   Label: LAB_0045dd1a
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045dd1c
        ;   Label: LAB_0045dd1c
    MOV dword ptr [EBP + -0xc],EAX      ; 0045dd1f
    JMP 0x0045dd2a                      ; 0045dd22
        ;   XREF to: 0045dd2a (UNCONDITIONAL_JUMP)  ; LAB_0045dd2a
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045dd24
        ;   Label: LAB_0045dd24
    INC dword ptr [EBP + -0xc]          ; 0045dd27
    MOV EAX,[0x016e990c]                ; 0045dd2a | g_PolygonCount
        ;   Label: LAB_0045dd2a
    DEC EAX                             ; 0045dd2f
    CMP EAX,dword ptr [EBP + -0xc]      ; 0045dd30
    JLE 0x0045dd5b                      ; 0045dd33
        ;   XREF to: 0045dd5b (CONDITIONAL_JUMP)  ; LAB_0045dd5b
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045dd35
    INC EAX                             ; 0045dd38
    IMUL EAX,EAX,0x184                  ; 0045dd39
    IMUL ESI,dword ptr [EBP + -0xc],0x184 ; 0045dd3f
    MOV ECX,0x61                        ; 0045dd46
    LEA EDI,[ESI + 0x16e9910]           ; 0045dd4b | g_ModelPolygonData
    LEA ESI,[EAX + 0x16e9910]           ; 0045dd51 | g_ModelPolygonData
    MOVSD.REP ES:EDI,ESI                ; 0045dd57 | g_ModelPolygonData | g_ModelPolygonData[0].texture_name[0]
    JMP 0x0045dd24                      ; 0045dd59
        ;   XREF to: 0045dd24 (UNCONDITIONAL_JUMP)  ; LAB_0045dd24
    DEC dword ptr [0x016e990c]          ; 0045dd5b | g_PolygonCount
        ;   Label: LAB_0045dd5b
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 0045dd61
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
        ;   Label: LAB_0045dd61
    MOV ESP,EBP                         ; 0045dd66
    POP EBP                             ; 0045dd68
    POP EDI                             ; 0045dd69
    POP ESI                             ; 0045dd6a
    POP EBX                             ; 0045dd6b
    RET                                 ; 0045dd6c

