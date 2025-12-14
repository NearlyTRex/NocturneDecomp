; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl float * core_door.cpp_CDoor_getOpenStandPos_FUN_00480e20(CDoor * this_ptr)
;
; Parameters:
; CDoor *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x68]:1  local_68
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined1       Stack[-0x2c]:1  local_2c
; undefined1       Stack[-0x20]:1  local_20
;
; XREF[1]:
;   core_charactr.cpp_CCharacter_FUN_0042ca70 at 0042cb64
;
; Referenced Globals:
;   void* switchdataD_00480e0c = 00480e74
;   TerminatedCString s_core_door_cpp_006212a9
;   TerminatedCString s_CDoor_getOpenStandPos_in_006212ba
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00480e20
        ;   Label: core_door.cpp_CDoor_getOpenStandPos_FUN_00480e20
    PUSH ESI                            ; 00480e21
    PUSH EDI                            ; 00480e22
    PUSH EBP                            ; 00480e23
    MOV EBP,ESP                         ; 00480e24
    SUB ESP,0x54                        ; 00480e26
    AND ESP,0xfffffff8                  ; 00480e29
    MOV EDI,dword ptr [EBP + 0x14]      ; 00480e2c
    MOV EBX,dword ptr [EBP + 0x18]      ; 00480e2f
    MOV ESI,dword ptr [EBP + 0x1c]      ; 00480e32
    MOV EAX,dword ptr [ESI]             ; 00480e35
    MOV dword ptr [ESP + 0xc],EAX       ; 00480e37
    LEA EAX,[ESI + 0x4]                 ; 00480e3b
    MOV EAX,dword ptr [EAX]             ; 00480e3e
    MOV dword ptr [ESP + 0x10],EAX      ; 00480e40
    LEA EAX,[ESI + 0x8]                 ; 00480e44
    MOV EAX,dword ptr [EAX]             ; 00480e47
    MOV dword ptr [ESP + 0x14],EAX      ; 00480e49
    FLD float ptr [ESP + 0x14]          ; 00480e4d
    FLDZ                                ; 00480e51
    FCOMPP                              ; 00480e53
    FNSTSW AX                           ; 00480e55
    SAHF                                ; 00480e57
    JA 0x00480ee0                       ; 00480e58
        ;   XREF to: 00480ee0 (CONDITIONAL_JUMP)  ; LAB_00480ee0
    MOV EAX,dword ptr [EDI + 0x2d8]     ; 00480e5e
        ;   Label: LAB_00480e5e
    CMP EAX,0x3                         ; 00480e64
    JA 0x00480fe3                       ; 00480e67
        ;   XREF to: 00480fe3 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x480e0c]  ; 00480e6d | caseD_1 | caseD_3 | switchdataD_00480e0c
        ;   Label: switchD
    MOV ESI,dword ptr [EBP + 0x20]      ; 00480e74
        ;   Label: caseD_2
    PUSH ESI                            ; 00480e77
    LEA EAX,[ESP + 0x40]                ; 00480e78
    PUSH EAX                            ; 00480e7c
    PUSH EDI                            ; 00480e7d
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 00480e7e
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    FLDZ                                ; 00480e83
    ADD ESP,0xc                         ; 00480e85
    LEA ESI,[EDI + 0x9bc]               ; 00480e88
    FCOMP float ptr [EAX + 0x8]         ; 00480e8e
    FNSTSW AX                           ; 00480e91
    SAHF                                ; 00480e93
    JNC 0x00480f58                      ; 00480e94
        ;   XREF to: 00480f58 (CONDITIONAL_JUMP)  ; LAB_00480f58
    LEA EAX,[ESP + 0xc]                 ; 00480e9a
    PUSH EAX                            ; 00480e9e
    LEA EAX,[ESP + 0x4]                 ; 00480e9f
    PUSH EAX                            ; 00480ea3
    PUSH EDI                            ; 00480ea4
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80 ; 00480ea5
        ;   XREF to: 00408e80 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_00408e80(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
    FLD float ptr [ESI]                 ; 00480eaa
    FADD float ptr [EAX]                ; 00480eac
    ADD ESP,0xc                         ; 00480eae
    FSTP float ptr [ESP + 0x24]         ; 00480eb1
    FLD float ptr [ESI + 0x4]           ; 00480eb5
    FADD float ptr [EAX + 0x4]          ; 00480eb8
    FSTP float ptr [ESP + 0x28]         ; 00480ebb
    FLD float ptr [ESI + 0x8]           ; 00480ebf
    FADD float ptr [EAX + 0x8]          ; 00480ec2
    LEA EAX,[ESP + 0x24]                ; 00480ec5
    FSTP float ptr [ESP + 0x2c]         ; 00480ec9
    CMP EBX,EAX                         ; 00480ecd
    JNZ 0x00480f35                      ; 00480ecf
        ;   XREF to: 00480f35 (CONDITIONAL_JUMP)  ; LAB_00480f35
    FLD float ptr [EDI + 0x24]          ; 00480ed1
        ;   Label: LAB_00480ed1
    MOV EAX,EBX                         ; 00480ed4
    FSTP float ptr [EBX + 0x4]          ; 00480ed6
    MOV ESP,EBP                         ; 00480ed9
    POP EBP                             ; 00480edb
    POP EDI                             ; 00480edc
    POP ESI                             ; 00480edd
    POP EBX                             ; 00480ede
    RET                                 ; 00480edf
    FLD float ptr [ESP + 0xc]           ; 00480ee0
        ;   Label: LAB_00480ee0
    FLD float ptr [ESP + 0x10]          ; 00480ee4
    FLD float ptr [ESP + 0x14]          ; 00480ee8
    LEA ESI,[ESP + 0x30]                ; 00480eec
    LEA EAX,[ESP + 0xc]                 ; 00480ef0
    FXCH ST2                            ; 00480ef4
    FCHS                                ; 00480ef6
    FXCH                                ; 00480ef8
    FCHS                                ; 00480efa
    FXCH ST2                            ; 00480efc
    FCHS                                ; 00480efe
    FXCH ST2                            ; 00480f00
    FSTP float ptr [ESP + 0x34]         ; 00480f02
    FXCH                                ; 00480f06
    FSTP float ptr [ESP + 0x38]         ; 00480f08
    FSTP float ptr [ESP + 0x30]         ; 00480f0c
    CMP EAX,ESI                         ; 00480f10
    JZ 0x00480e5e                       ; 00480f12
        ;   XREF to: 00480e5e (CONDITIONAL_JUMP)  ; LAB_00480e5e
    MOV EAX,dword ptr [ESP + 0x30]      ; 00480f18
    MOV dword ptr [ESP + 0xc],EAX       ; 00480f1c
    MOV EAX,dword ptr [ESP + 0x34]      ; 00480f20
    MOV dword ptr [ESP + 0x10],EAX      ; 00480f24
    MOV EAX,dword ptr [ESP + 0x38]      ; 00480f28
    MOV dword ptr [ESP + 0x14],EAX      ; 00480f2c
    JMP 0x00480e5e                      ; 00480f30
        ;   XREF to: 00480e5e (UNCONDITIONAL_JUMP)  ; LAB_00480e5e
    MOV EAX,dword ptr [ESP + 0x24]      ; 00480f35
        ;   Label: LAB_00480f35
    MOV dword ptr [EBX],EAX             ; 00480f39
    MOV EAX,dword ptr [ESP + 0x28]      ; 00480f3b
    MOV dword ptr [EBX + 0x4],EAX       ; 00480f3f
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00480f42
    MOV dword ptr [EBX + 0x8],EAX       ; 00480f46
    FLD float ptr [EDI + 0x24]          ; 00480f49
    MOV EAX,EBX                         ; 00480f4c
    FSTP float ptr [EBX + 0x4]          ; 00480f4e
    MOV ESP,EBP                         ; 00480f51
    POP EBP                             ; 00480f53
    POP EDI                             ; 00480f54
    POP ESI                             ; 00480f55
    POP EBX                             ; 00480f56
    RET                                 ; 00480f57
    LEA EAX,[ESP + 0xc]                 ; 00480f58
        ;   Label: LAB_00480f58
    PUSH EAX                            ; 00480f5c
    LEA EAX,[ESP + 0x4c]                ; 00480f5d
    PUSH EAX                            ; 00480f61
    PUSH EDI                            ; 00480f62
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80 ; 00480f63
        ;   XREF to: 00408e80 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_00408e80(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
    FLD float ptr [ESI]                 ; 00480f68
    FSUB float ptr [EAX]                ; 00480f6a
    ADD ESP,0xc                         ; 00480f6c
    FSTP float ptr [ESP + 0x18]         ; 00480f6f
    FLD float ptr [ESI + 0x4]           ; 00480f73
    FSUB float ptr [EAX + 0x4]          ; 00480f76
    FSTP float ptr [ESP + 0x1c]         ; 00480f79
    FLD float ptr [ESI + 0x8]           ; 00480f7d
    FSUB float ptr [EAX + 0x8]          ; 00480f80
    LEA EAX,[ESP + 0x18]                ; 00480f83
    FSTP float ptr [ESP + 0x20]         ; 00480f87
    CMP EBX,EAX                         ; 00480f8b
    JZ 0x00480ed1                       ; 00480f8d
        ;   XREF to: 00480ed1 (CONDITIONAL_JUMP)  ; LAB_00480ed1
    MOV EAX,dword ptr [ESP + 0x18]      ; 00480f93
    MOV dword ptr [EBX],EAX             ; 00480f97
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00480f99
    MOV dword ptr [EBX + 0x4],EAX       ; 00480f9d
    MOV EAX,dword ptr [ESP + 0x20]      ; 00480fa0
    MOV dword ptr [EBX + 0x8],EAX       ; 00480fa4
    FLD float ptr [EDI + 0x24]          ; 00480fa7
    MOV EAX,EBX                         ; 00480faa
    FSTP float ptr [EBX + 0x4]          ; 00480fac
    MOV ESP,EBP                         ; 00480faf
    POP EBP                             ; 00480fb1
    POP EDI                             ; 00480fb2
    POP ESI                             ; 00480fb3
    POP EBX                             ; 00480fb4
    RET                                 ; 00480fb5
    LEA EAX,[EDI + 0x9bc]               ; 00480fb6
        ;   Label: caseD_3
    CMP EBX,EAX                         ; 00480fbc
    JZ 0x00480ed1                       ; 00480fbe
        ;   XREF to: 00480ed1 (CONDITIONAL_JUMP)  ; LAB_00480ed1
    MOV EDX,dword ptr [EAX]             ; 00480fc4
    MOV dword ptr [EBX],EDX             ; 00480fc6
    MOV EDX,dword ptr [EAX + 0x4]       ; 00480fc8
    MOV dword ptr [EBX + 0x4],EDX       ; 00480fcb
    MOV EDX,dword ptr [EAX + 0x8]       ; 00480fce
    MOV dword ptr [EBX + 0x8],EDX       ; 00480fd1
    FLD float ptr [EDI + 0x24]          ; 00480fd4
    MOV EAX,EBX                         ; 00480fd7
    FSTP float ptr [EBX + 0x4]          ; 00480fd9
    MOV ESP,EBP                         ; 00480fdc
    POP EBP                             ; 00480fde
    POP EDI                             ; 00480fdf
    POP ESI                             ; 00480fe0
    POP EBX                             ; 00480fe1
    RET                                 ; 00480fe2
    MOV EDX,0x6212a9                    ; 00480fe3 | = "..\\core\\door.cpp"
        ;   Label: default
    MOV ECX,0x340                       ; 00480fe8
    PUSH 0x6212ba                       ; 00480fed | = "CDoor::getOpenStandPos - invalid door..."
    MOV dword ptr [0x02f0ca48],EDX      ; 00480ff2 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 00480ff8 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00480ffe
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00481003
    FLD float ptr [EDI + 0x24]          ; 00481006
    MOV EAX,EBX                         ; 00481009
    FSTP float ptr [EBX + 0x4]          ; 0048100b
    MOV ESP,EBP                         ; 0048100e
    POP EBP                             ; 00481010
    POP EDI                             ; 00481011
    POP ESI                             ; 00481012
    POP EBX                             ; 00481013
    RET                                 ; 00481014

