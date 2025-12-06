; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dmodel.cpp_CKeyFramedModel_exportToDSE_FUN_0047e810(CKeyFramedModel * this_ptr)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 at 0047e3cc
;
; Referenced Globals:
;   TerminatedCString s_core_dmodel_cpp_00620e43
;   TerminatedCString s_CKeyFramedModel_exportTo_00620e56
;   double DOUBLE_00620ea3 = 0.00390625
;   double DOUBLE_00620eab = 0.0000152587890625
;   int g_VertexCount
;   SVertexData[20000] g_LoadedVertices
;   undefined4 DAT_01626410
;   undefined4 g_LoadedVertices[0].vertex.z
;   undefined4 DAT_01626420
;   undefined4 DAT_01626424
;   undefined4 DAT_01626428
;   int g_PolygonCount
;   SShapeEditorPolygon[20000] g_ModelPolygonData
;   undefined4 DAT_016e9914
;   undefined4 DAT_016e9915
;   ... and 15 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047e810
        ;   Label: core_dmodel.cpp_CKeyFramedModel_exportToDSE_FUN_0047e810
    PUSH ESI                            ; 0047e811
    PUSH EDI                            ; 0047e812
    PUSH EBP                            ; 0047e813
    SUB ESP,0x14                        ; 0047e814
    MOV EBX,dword ptr [ESP + 0x28]      ; 0047e817
    CMP dword ptr [EBX + 0x100],0x1     ; 0047e81b
    JG 0x0047e9da                       ; 0047e822 | LAB_0047e9da
        ;   XREF to: 0047e9da (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0x104]     ; 0047e828
        ;   Label: LAB_0047e828
    MOV [0x01626408],EAX                ; 0047e82e | int g_VertexCount
    TEST EAX,EAX                        ; 0047e833
    JLE 0x0047e894                      ; 0047e835 | LAB_0047e894
        ;   XREF to: 0047e894 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [0x01626408]      ; 0047e837 | int g_VertexCount
    FLD double ptr [0x00620ea3]         ; 0047e83d | double DOUBLE_00620ea3
    LEA ESI,[ECX*0x4 + 0x0]             ; 0047e843
    XOR EAX,EAX                         ; 0047e84a
    SUB ESI,ECX                         ; 0047e84c
    XOR EDX,EDX                         ; 0047e84e
    SHL ESI,0x2                         ; 0047e850
    MOV ECX,dword ptr [EBX + 0x10c]     ; 0047e853
        ;   Label: LAB_0047e853
    FILD dword ptr [ECX + EAX*0x1]      ; 0047e859
    FMUL ST1                            ; 0047e85c
    FSTP float ptr [EDX + 0x162640c]    ; 0047e85e | SVertexData[20000] g_LoadedVertices
    MOV ECX,dword ptr [EBX + 0x10c]     ; 0047e864
    FILD dword ptr [ECX + EAX*0x1 + 0x4] ; 0047e86a
    FMUL ST1                            ; 0047e86e
    FSTP float ptr [EDX + 0x1626410]    ; 0047e870 | DAT_01626410
    MOV ECX,dword ptr [EBX + 0x10c]     ; 0047e876
    FILD dword ptr [ECX + EAX*0x1 + 0x8] ; 0047e87c
    FMUL ST1                            ; 0047e880
    ADD EDX,0x14                        ; 0047e882
    ADD EAX,0xc                         ; 0047e885
    FSTP float ptr [EDX + 0x1626400]    ; 0047e888 | g_LoadedVertices[0].vertex.z
    CMP EAX,ESI                         ; 0047e88e
    JL 0x0047e853                       ; 0047e890 | LAB_0047e853
        ;   XREF to: 0047e853 (CONDITIONAL_JUMP)
    FSTP ST0                            ; 0047e892
    MOV EAX,dword ptr [EBX + 0x110]     ; 0047e894
        ;   Label: LAB_0047e894
    XOR EBP,EBP                         ; 0047e89a
    MOV [0x016e990c],EAX                ; 0047e89c | int g_PolygonCount
    MOV dword ptr [ESP + 0x8],EBP       ; 0047e8a1
    TEST EAX,EAX                        ; 0047e8a5
    JLE 0x0047e9c8                      ; 0047e8a7 | LAB_0047e9c8
        ;   XREF to: 0047e9c8 (CONDITIONAL_JUMP)
    LEA EAX,[EBX + 0x124]               ; 0047e8ad
    MOV dword ptr [ESP + 0xc],EBP       ; 0047e8b3
    MOV dword ptr [ESP + 0x4],EBP       ; 0047e8b7
    MOV dword ptr [ESP],EAX             ; 0047e8bb
    XOR ESI,ESI                         ; 0047e8be
        ;   Label: LAB_0047e8be
    MOV ECX,0x2                         ; 0047e8c0
    MOV dword ptr [EBP + 0x16e9a88],ESI ; 0047e8c5 | DAT_016e9a88
    MOV dword ptr [EBP + 0x16e9910],ECX ; 0047e8cb | SShapeEditorPolygon[20000] g_ModelPolygonData
    MOV EDI,dword ptr [ESP + 0xc]       ; 0047e8d1
    MOV EAX,dword ptr [EBX + 0x114]     ; 0047e8d5
    ADD EAX,EDI                         ; 0047e8db
    MOV dword ptr [ESP + 0x10],EBP      ; 0047e8dd
    MOV EAX,dword ptr [EAX + 0x4]       ; 0047e8e1
    MOV EDX,EBP                         ; 0047e8e4
    MOV dword ptr [EBP + 0x16e99b4],EAX ; 0047e8e6 | DAT_016e99b4
    MOV ECX,EDI                         ; 0047e8ec
    MOV EDI,dword ptr [EBP + 0x16e99b4] ; 0047e8ee | DAT_016e99b4
    XOR EAX,EAX                         ; 0047e8f4
    TEST EDI,EDI                        ; 0047e8f6
    JLE 0x0047e94f                      ; 0047e8f8 | LAB_0047e94f
        ;   XREF to: 0047e94f (CONDITIONAL_JUMP)
    FLD double ptr [0x00620eab]         ; 0047e8fa | double DOUBLE_00620eab
    MOV EDI,dword ptr [EBX + 0x114]     ; 0047e900
        ;   Label: LAB_0047e900
    ADD EDI,ECX                         ; 0047e906
    MOV EDI,dword ptr [EDI + EAX*0x1 + 0x18] ; 0047e908
    MOV dword ptr [EDX + 0x16e99c8],EDI ; 0047e90c | DAT_016e99c8
    MOV EDI,dword ptr [EBX + 0x114]     ; 0047e912
    ADD EDI,ECX                         ; 0047e918
    FILD dword ptr [EDI + EAX*0x1 + 0x1c] ; 0047e91a
    FMUL ST1                            ; 0047e91e
    FSTP float ptr [EDX + 0x16e9a08]    ; 0047e920 | DAT_016e9a08
    MOV EDI,dword ptr [EBX + 0x114]     ; 0047e926
    ADD EDI,ECX                         ; 0047e92c
    FILD dword ptr [EDI + EAX*0x1 + 0x20] ; 0047e92e
    FMUL ST1                            ; 0047e932
    ADD EDX,0x4                         ; 0047e934
    ADD EAX,0xc                         ; 0047e937
    INC ESI                             ; 0047e93a
    MOV EDI,dword ptr [ESP + 0x10]      ; 0047e93b
    FSTP float ptr [EDX + 0x16e9a44]    ; 0047e93f | DAT_016e9a48
    CMP ESI,dword ptr [EDI + 0x16e99b4] ; 0047e945 | DAT_016e99b4
    JL 0x0047e900                       ; 0047e94b | LAB_0047e900
        ;   XREF to: 0047e900 (CONDITIONAL_JUMP)
    FSTP ST0                            ; 0047e94d
    MOV ECX,dword ptr [ESP + 0x4]       ; 0047e94f
        ;   Label: LAB_0047e94f
    MOV EDX,dword ptr [EBX + 0x118]     ; 0047e953
    ADD EDX,ECX                         ; 0047e959
    MOV EDX,dword ptr [EDX]             ; 0047e95b
    LEA EAX,[EDX*0x8 + 0x0]             ; 0047e95d
    ADD EAX,EDX                         ; 0047e964
    MOV ESI,dword ptr [ESP]             ; 0047e966
    SHL EAX,0x3                         ; 0047e969
    MOV EDI,0x16e9910                   ; 0047e96c | SShapeEditorPolygon[20000] g_ModelPolygonData
    ADD EAX,ESI                         ; 0047e971
    ADD EBP,0x184                       ; 0047e973
    LEA ESI,[EAX + 0x8]                 ; 0047e979
    ADD ECX,0x4                         ; 0047e97c
    MOV EAX,dword ptr [ESP + 0x10]      ; 0047e97f
    MOV dword ptr [ESP + 0x4],ECX       ; 0047e983
    ADD EDI,EAX                         ; 0047e987
    MOV EDX,dword ptr [ESP + 0xc]       ; 0047e989
    ADD EDI,0x4                         ; 0047e98d
    ADD EDX,0x48                        ; 0047e990
    PUSH EDI                            ; 0047e993
    MOV AL,byte ptr [ESI]               ; 0047e994
        ;   Label: LAB_0047e994
    MOV byte ptr [EDI],AL               ; 0047e996 | DAT_016e9914
    CMP AL,0x0                          ; 0047e998
    JZ 0x0047e9ac                       ; 0047e99a | LAB_0047e9ac
        ;   XREF to: 0047e9ac (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 0047e99c
    ADD ESI,0x2                         ; 0047e99f
    MOV byte ptr [EDI + 0x1],AL         ; 0047e9a2 | DAT_016e9915
    ADD EDI,0x2                         ; 0047e9a5
    CMP AL,0x0                          ; 0047e9a8
    JNZ 0x0047e994                      ; 0047e9aa | LAB_0047e994
        ;   XREF to: 0047e994 (CONDITIONAL_JUMP)
    POP EDI                             ; 0047e9ac
        ;   Label: LAB_0047e9ac
    MOV ESI,dword ptr [ESP + 0x8]       ; 0047e9ad
    MOV dword ptr [ESP + 0xc],EDX       ; 0047e9b1
    INC ESI                             ; 0047e9b5
    MOV EDI,dword ptr [0x016e990c]      ; 0047e9b6 | int g_PolygonCount
    MOV dword ptr [ESP + 0x8],ESI       ; 0047e9bc
    CMP ESI,EDI                         ; 0047e9c0
    JL 0x0047e8be                       ; 0047e9c2 | LAB_0047e8be
        ;   XREF to: 0047e8be (CONDITIONAL_JUMP)
    MOV dword ptr [0x01e528a0],0x1      ; 0047e9c8 | int g_PartsCount
        ;   Label: LAB_0047e9c8
    ADD ESP,0x14                        ; 0047e9d2
    POP EBP                             ; 0047e9d5
    POP EDI                             ; 0047e9d6
    POP ESI                             ; 0047e9d7
    POP EBX                             ; 0047e9d8
    RET                                 ; 0047e9d9
    MOV ECX,0x620e43                    ; 0047e9da | = "..\\core\\dmodel.cpp" | s_core_dmodel_cpp_00620e43 = ..\core\dmodel.cpp
        ;   Label: LAB_0047e9da
    MOV ESI,0xe07                       ; 0047e9df
    PUSH 0x620e56                       ; 0047e9e4 | = "CKeyFramedModel::exportToDSE - can't ..." | s_CKeyFramedModel_exportTo_00620e56 = CKeyFramedModel::exportToDSE - can't export multiple-frame model to DSE
    MOV dword ptr [0x02f0ca48],ECX      ; 0047e9e9 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 0047e9ef | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0047e9f5 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0047e9fa
    JMP 0x0047e828                      ; 0047e9fd | LAB_0047e828
        ;   XREF to: 0047e828 (UNCONDITIONAL_JUMP)

