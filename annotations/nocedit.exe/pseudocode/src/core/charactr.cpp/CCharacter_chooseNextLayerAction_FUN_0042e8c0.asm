; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_charactr.cpp_CCharacter_chooseNextLayerAction_FUN_0042e8c0(CCharacter * this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0x28]:8  local_28
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_scat.cpp_FUN_00558060 at 005581d3
;   core_stranger.cpp_CStranger_FUN_005c5270 at 005c550f
;
; Referenced Globals:
;   TerminatedCString s_core_charactr_cpp_00617568
;   TerminatedCString s_CCharacter_chooseNextLay_0061757d
;   double DOUBLE_006175ba = 0.0000100000000000000
;   double DOUBLE_006175c2 = 0.999990000000000
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042e8c0
        ;   Label: core_charactr.cpp_CCharacter_chooseNextLayerAction_FUN_0042e8c0
    PUSH ESI                            ; 0042e8c1
    PUSH EDI                            ; 0042e8c2
    PUSH EBP                            ; 0042e8c3
    MOV EBP,ESP                         ; 0042e8c4
    SUB ESP,0x18                        ; 0042e8c6
    AND ESP,0xfffffff8                  ; 0042e8c9
    MOV EBX,dword ptr [EBP + 0x14]      ; 0042e8cc
    MOV ESI,dword ptr [EBP + 0x18]      ; 0042e8cf
    MOV EDX,dword ptr [EBX + 0x2a8c]    ; 0042e8d2
    TEST EDX,EDX                        ; 0042e8d8
    JL 0x0042e8e4                       ; 0042e8da | LAB_0042e8e4
        ;   XREF to: 0042e8e4 (CONDITIONAL_JUMP)
    CMP EDX,dword ptr [EBX + 0x2628]    ; 0042e8dc
    JL 0x0042e906                       ; 0042e8e2 | LAB_0042e906
        ;   XREF to: 0042e906 (CONDITIONAL_JUMP)
    MOV EDI,0x617568                    ; 0042e8e4 | = "..\\core\\charactr.cpp" | s_core_charactr_cpp_00617568 = ..\core\charactr.cpp
        ;   Label: LAB_0042e8e4
    MOV EAX,0xfa0                       ; 0042e8e9
    PUSH 0x61757d                       ; 0042e8ee | = "CCharacter::chooseNextLayerAction - i..." | s_CCharacter_chooseNextLay_0061757d = CCharacter::chooseNextLayerAction - invalid layerActionIndex
    MOV dword ptr [0x02f0ca48],EDI      ; 0042e8f3 | char * g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 0042e8f9 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0042e8fe | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0042e903
    FLD float ptr [EBX + 0x2a90]        ; 0042e906
        ;   Label: LAB_0042e906
    FST double ptr [ESP]                ; 0042e90c
    FCOMP double ptr [0x006175ba]       ; 0042e90f | double DOUBLE_006175ba
    FNSTSW AX                           ; 0042e915
    SAHF                                ; 0042e917
    JNC 0x0042e98d                      ; 0042e918 | LAB_0042e98d
        ;   XREF to: 0042e98d (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0x2a8c]    ; 0042e91e
    SHL EAX,0x3                         ; 0042e924
    MOV EDX,EAX                         ; 0042e927
    SHL EAX,0x3                         ; 0042e929
    SUB EAX,EDX                         ; 0042e92c
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x262c] ; 0042e92e
    MOV dword ptr [ESP + 0x8],EAX       ; 0042e935
        ;   Label: LAB_0042e935
    CMP ESI,dword ptr [ESP + 0x8]       ; 0042e939
    JZ 0x0042e986                       ; 0042e93d | LAB_0042e986
        ;   XREF to: 0042e986 (CONDITIONAL_JUMP)
    MOV ECX,0x4479c000                  ; 0042e93f
    MOV EDI,dword ptr [EBX + 0x2628]    ; 0042e944
    MOV dword ptr [ESP + 0x14],ECX      ; 0042e94a
    XOR ECX,ECX                         ; 0042e94e
    TEST EDI,EDI                        ; 0042e950
    JLE 0x0042e986                      ; 0042e952 | LAB_0042e986
        ;   XREF to: 0042e986 (CONDITIONAL_JUMP)
    SHL ESI,0x2                         ; 0042e954
    LEA EDX,[EBX + 0x262c]              ; 0042e957
    MOV EDI,dword ptr [EDX + 0x28]      ; 0042e95d
        ;   Label: LAB_0042e95d
    MOV EAX,EDX                         ; 0042e960
    TEST EDI,EDI                        ; 0042e962
    JL 0x0042e96e                       ; 0042e964 | LAB_0042e96e
        ;   XREF to: 0042e96e (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [EDX]             ; 0042e966
    CMP EDI,dword ptr [ESP + 0x8]       ; 0042e968
    JZ 0x0042e9b4                       ; 0042e96c | LAB_0042e9b4
        ;   XREF to: 0042e9b4 (CONDITIONAL_JUMP)
    CMP dword ptr [EAX + 0x28],0x0      ; 0042e96e
        ;   Label: LAB_0042e96e
    JLE 0x0042e9eb                      ; 0042e972 | LAB_0042e9eb
        ;   XREF to: 0042e9eb (CONDITIONAL_JUMP)
    INC ECX                             ; 0042e978
        ;   Label: LAB_0042e978
    MOV EAX,dword ptr [EBX + 0x2628]    ; 0042e979
    ADD EDX,0x38                        ; 0042e97f
    CMP ECX,EAX                         ; 0042e982
    JL 0x0042e95d                       ; 0042e984 | LAB_0042e95d
        ;   XREF to: 0042e95d (CONDITIONAL_JUMP)
    MOV ESP,EBP                         ; 0042e986
        ;   Label: LAB_0042e986
    POP EBP                             ; 0042e988
    POP EDI                             ; 0042e989
    POP ESI                             ; 0042e98a
    POP EBX                             ; 0042e98b
    RET                                 ; 0042e98c
    FLD double ptr [ESP]                ; 0042e98d
        ;   Label: LAB_0042e98d
    FCOMP double ptr [0x006175c2]       ; 0042e990 | double DOUBLE_006175c2
    FNSTSW AX                           ; 0042e996
    SAHF                                ; 0042e998
    JBE 0x0042e986                      ; 0042e999 | LAB_0042e986
        ;   XREF to: 0042e986 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0x2a8c]    ; 0042e99b
    SHL EAX,0x3                         ; 0042e9a1
    MOV EDX,EAX                         ; 0042e9a4
    SHL EAX,0x3                         ; 0042e9a6
    SUB EAX,EDX                         ; 0042e9a9
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x2630] ; 0042e9ab
    JMP 0x0042e935                      ; 0042e9b2 | LAB_0042e935
        ;   XREF to: 0042e935 (UNCONDITIONAL_JUMP)
    IMUL EAX,dword ptr [EDX + 0x4],0x50 ; 0042e9b4
        ;   Label: LAB_0042e9b4
    ADD EAX,EBX                         ; 0042e9b8
    FLD float ptr [EDX + 0x34]          ; 0042e9ba
    FADD float ptr [ESI + EAX*0x1 + 0xb7e4] ; 0042e9bd
    FST float ptr [ESP + 0xc]           ; 0042e9c4
    FCOMP float ptr [ESP + 0x14]        ; 0042e9c8
    FNSTSW AX                           ; 0042e9cc
    SAHF                                ; 0042e9ce
    JNC 0x0042e978                      ; 0042e9cf | LAB_0042e978
        ;   XREF to: 0042e978 (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x2a90],0x0    ; 0042e9d1
    MOV EAX,dword ptr [ESP + 0xc]       ; 0042e9db
    MOV dword ptr [EBX + 0x2a8c],ECX    ; 0042e9df
    MOV dword ptr [ESP + 0x14],EAX      ; 0042e9e5
    JMP 0x0042e978                      ; 0042e9e9 | LAB_0042e978
        ;   XREF to: 0042e978 (UNCONDITIONAL_JUMP)
    MOV EDI,dword ptr [EAX + 0x4]       ; 0042e9eb
        ;   Label: LAB_0042e9eb
    CMP EDI,dword ptr [ESP + 0x8]       ; 0042e9ee
    JNZ 0x0042e978                      ; 0042e9f2 | LAB_0042e978
        ;   XREF to: 0042e978 (CONDITIONAL_JUMP)
    IMUL EDI,dword ptr [EAX],0x50       ; 0042e9f4
    ADD EDI,EBX                         ; 0042e9f7
    ADD EDI,ESI                         ; 0042e9f9
    FLD float ptr [EAX + 0x34]          ; 0042e9fb
    FADD float ptr [EDI + 0xb7e4]       ; 0042e9fe
    FST float ptr [ESP + 0x10]          ; 0042ea04
    FCOMP float ptr [ESP + 0x14]        ; 0042ea08
    FNSTSW AX                           ; 0042ea0c
    SAHF                                ; 0042ea0e
    JNC 0x0042e978                      ; 0042ea0f | LAB_0042e978
        ;   XREF to: 0042e978 (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x2a90],0x3f800000 ; 0042ea15
    MOV EAX,dword ptr [ESP + 0x10]      ; 0042ea1f
    MOV dword ptr [EBX + 0x2a8c],ECX    ; 0042ea23
    MOV dword ptr [ESP + 0x14],EAX      ; 0042ea29
    JMP 0x0042e978                      ; 0042ea2d | LAB_0042e978
        ;   XREF to: 0042e978 (UNCONDITIONAL_JUMP)

