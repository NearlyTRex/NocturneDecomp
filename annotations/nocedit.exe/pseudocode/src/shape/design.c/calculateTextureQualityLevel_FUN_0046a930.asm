; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int shape_design.c_calculateTextureQualityLevel_FUN_0046a930(int texture_parameter)
;
; Parameters:
; int              Stack[0x4]:4   texture_parameter
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 at 0047dbd8
;   core_skeledit.cpp_FUN_0058c190 at 0058cb9e
;   shape_design.c_cramTextureList_FUN_0046bb80 at 0046cff8
;
; Referenced Globals:
;   int g_TextureQualityLevel
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046a930
        ;   Label: shape_design.c_calculateTextureQualityLevel_FUN_0046a930
    PUSH ESI                            ; 0046a931
    PUSH EDI                            ; 0046a932
    PUSH EBP                            ; 0046a933
    MOV EBP,ESP                         ; 0046a934
    SUB ESP,0x8                         ; 0046a936
    MOV EAX,[0x01eb1488]                ; 0046a93c | int g_TextureQualityLevel
    SUB EAX,0x5                         ; 0046a941
    MOV dword ptr [EBP + -0x4],EAX      ; 0046a944
    CMP dword ptr [EBP + 0x14],0x9      ; 0046a947
    JLE 0x0046a951                      ; 0046a94b | LAB_0046a951
        ;   XREF to: 0046a951 (CONDITIONAL_JUMP)
    ADD dword ptr [EBP + -0x4],-0x1     ; 0046a94d
    CMP dword ptr [EBP + 0x14],0x1      ; 0046a951
        ;   Label: LAB_0046a951
    JLE 0x0046a95b                      ; 0046a955 | LAB_0046a95b
        ;   XREF to: 0046a95b (CONDITIONAL_JUMP)
    ADD dword ptr [EBP + -0x4],-0x1     ; 0046a957
    MOV EAX,dword ptr [EBP + -0x4]      ; 0046a95b
        ;   Label: LAB_0046a95b
    MOV dword ptr [EBP + -0x8],EAX      ; 0046a95e
    MOV EAX,dword ptr [EBP + -0x8]      ; 0046a961
    MOV ESP,EBP                         ; 0046a964
    POP EBP                             ; 0046a966
    POP EDI                             ; 0046a967
    POP ESI                             ; 0046a968
    POP EBX                             ; 0046a969
    RET                                 ; 0046a96a

