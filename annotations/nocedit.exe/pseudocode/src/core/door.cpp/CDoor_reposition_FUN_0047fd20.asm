; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_door.cpp_CDoor_reposition_FUN_0047fd20(CDoor * this_ptr)
;
; Parameters:
; CDoor *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0xc8]:1  local_c8
;
; XREF[4]:
;   core_door.cpp_CDoor_process_FUN_004800c0 at 004805c2
;   core_door.cpp_CDoor_renderOpaque_FUN_004807d0 at 004808c1
;   core_door.cpp_CDoor_updateCollisionData_FUN_00481020 at 0048103c
;   core_door.cpp_FUN_004812b0 at 004812e7
;
; Referenced Globals:
;   void* switchdataD_0047fd0c = 0047fd5a
;   TerminatedCString s_core_door_cpp_00621105
;   TerminatedCString s_CDoor_reposition_Unknown_00621116
;   double DOUBLE_00621139 = 1.57079632675000
;   float FLOAT_00621141 = 0.5
;   double DOUBLE_00621149 = -0.300000000000000
;   double DOUBLE_00621151 = 0.300000000000000
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047fd20
        ;   Label: core_door.cpp_CDoor_reposition_FUN_0047fd20
    PUSH ESI                            ; 0047fd21
    PUSH EDI                            ; 0047fd22
    PUSH EBP                            ; 0047fd23
    MOV EBP,ESP                         ; 0047fd24
    SUB ESP,0xc8                        ; 0047fd26
    AND ESP,0xfffffff8                  ; 0047fd2c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0047fd2f
    LEA EAX,[ESP + 0x10]                ; 0047fd32
    PUSH EAX                            ; 0047fd36
    MOV ESI,dword ptr [EBX + 0x154]     ; 0047fd37
    PUSH EBX                            ; 0047fd3d
    CALL dword ptr [ESI + 0x14]         ; 0047fd3e
    MOV EAX,dword ptr [EBX + 0x2d8]     ; 0047fd41
    ADD ESP,0x8                         ; 0047fd47
    CMP EAX,0x3                         ; 0047fd4a
    JA 0x0047ffd9                       ; 0047fd4d
        ;   XREF to: 0047ffd9 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x47fd0c]  ; 0047fd53 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    LEA ESI,[EBX + 0x20]                ; 0047fd5a
        ;   Label: caseD_0
    MOV dword ptr [EBX + 0x30],0x0      ; 0047fd5d
    LEA EAX,[EBX + 0x994]               ; 0047fd64
    MOV dword ptr [EBX + 0x38],0x0      ; 0047fd6a
    MOV EDX,dword ptr [EAX]             ; 0047fd71
    MOV dword ptr [ESI],EDX             ; 0047fd73
    MOV EDX,dword ptr [EAX + 0x4]       ; 0047fd75
    MOV dword ptr [ESI + 0x4],EDX       ; 0047fd78
    MOV EDX,dword ptr [EAX + 0x8]       ; 0047fd7b
    MOV dword ptr [ESI + 0x8],EDX       ; 0047fd7e
    CMP dword ptr [EBX + 0x2e4],0x0     ; 0047fd81
    JNZ 0x0047fe33                      ; 0047fd88
        ;   XREF to: 0047fe33 (CONDITIONAL_JUMP)  ; LAB_0047fe33
    FLD float ptr [EBX + 0x9ac]         ; 0047fd8e
    FMUL double ptr [0x00621139]        ; 0047fd94 | DOUBLE_00621139
    FADD float ptr [EBX + 0x9a4]        ; 0047fd9a
    FSTP float ptr [EBX + 0x34]         ; 0047fda0
        ;   Label: LAB_0047fda0
    PUSH EBX                            ; 0047fda3
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10 ; 0047fda4
        ;   XREF to: 00408c10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0047fda9
    FLD float ptr [ESP + 0x1c]          ; 0047fdac
    FST double ptr [ESP + 0x8]          ; 0047fdb0
    FABS                                ; 0047fdb4
    FLD float ptr [ESP + 0x10]          ; 0047fdb6
    FST double ptr [ESP]                ; 0047fdba
    FABS                                ; 0047fdbd
    FCOMPP                              ; 0047fdbf
    FNSTSW AX                           ; 0047fdc1
    SAHF                                ; 0047fdc3
    JBE 0x0047fe4a                      ; 0047fdc4
        ;   XREF to: 0047fe4a (CONDITIONAL_JUMP)  ; LAB_0047fe4a
    FLD double ptr [ESP]                ; 0047fdca
    FADD double ptr [0x00621151]        ; 0047fdcd | DOUBLE_00621151
    FSTP float ptr [EBX + 0x9bc]        ; 0047fdd3
        ;   Label: LAB_0047fdd3
    LEA ESI,[EBX + 0x9bc]               ; 0047fdd9
    PUSH ESI                            ; 0047fddf
    LEA EAX,[ESP + 0x8c]                ; 0047fde0
    PUSH EAX                            ; 0047fde7
    MOV dword ptr [EBX + 0x9c0],0x40600000 ; 0047fde8
    PUSH EBX                            ; 0047fdf2
    MOV dword ptr [EBX + 0x9c4],0x0     ; 0047fdf3
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 0047fdfd
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 0047fe02
        ;   Label: LAB_0047fe02
    CMP ESI,EAX                         ; 0047fe05
    JZ 0x0047fe19                       ; 0047fe07
        ;   XREF to: 0047fe19 (CONDITIONAL_JUMP)  ; LAB_0047fe19
    MOV EDX,dword ptr [EAX]             ; 0047fe09
    MOV dword ptr [ESI],EDX             ; 0047fe0b
    MOV EDX,dword ptr [EAX + 0x4]       ; 0047fe0d
    MOV dword ptr [ESI + 0x4],EDX       ; 0047fe10
    MOV EDX,dword ptr [EAX + 0x8]       ; 0047fe13
    MOV dword ptr [ESI + 0x8],EDX       ; 0047fe16
    FLD float ptr [EBX + 0x9cc]         ; 0047fe19
        ;   Label: LAB_0047fe19
    FLDZ                                ; 0047fe1f
    FCOMPP                              ; 0047fe21
    FNSTSW AX                           ; 0047fe23
    SAHF                                ; 0047fe25
    JC 0x00480001                       ; 0047fe26
        ;   XREF to: 00480001 (CONDITIONAL_JUMP)  ; LAB_00480001
    MOV ESP,EBP                         ; 0047fe2c
    POP EBP                             ; 0047fe2e
    POP EDI                             ; 0047fe2f
    POP ESI                             ; 0047fe30
    POP EBX                             ; 0047fe31
    RET                                 ; 0047fe32
    FLD float ptr [EBX + 0x9ac]         ; 0047fe33
        ;   Label: LAB_0047fe33
    FMUL double ptr [0x00621139]        ; 0047fe39 | DOUBLE_00621139
    FSUBR float ptr [EBX + 0x9a4]       ; 0047fe3f
    JMP 0x0047fda0                      ; 0047fe45
        ;   XREF to: 0047fda0 (UNCONDITIONAL_JUMP)  ; LAB_0047fda0
    FLD double ptr [ESP + 0x8]          ; 0047fe4a
        ;   Label: LAB_0047fe4a
    FADD double ptr [0x00621149]        ; 0047fe4e | DOUBLE_00621149
    JMP 0x0047fdd3                      ; 0047fe54
        ;   XREF to: 0047fdd3 (UNCONDITIONAL_JUMP)  ; LAB_0047fdd3
    FLD float ptr [EBX + 0x998]         ; 0047fe59
        ;   Label: caseD_1
    FADD float ptr [EBX + 0x9ac]        ; 0047fe5f
    MOV EAX,0x40600000                  ; 0047fe65
    FSTP float ptr [EBX + 0x24]         ; 0047fe6a
    MOV dword ptr [ESP + 0x98],EAX      ; 0047fe6d
    LEA EAX,[ESP + 0x94]                ; 0047fe74
    PUSH EAX                            ; 0047fe7b
    LEA EAX,[ESP + 0x68]                ; 0047fe7c
    PUSH EAX                            ; 0047fe80
    XOR EDI,EDI                         ; 0047fe81
    PUSH EBX                            ; 0047fe83
    MOV dword ptr [ESP + 0xa0],EDI      ; 0047fe84
    MOV dword ptr [ESP + 0xa8],EDI      ; 0047fe8b
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 0047fe92
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    LEA ESI,[EBX + 0x9bc]               ; 0047fe97
    JMP 0x0047fe02                      ; 0047fe9d
        ;   XREF to: 0047fe02 (UNCONDITIONAL_JUMP)  ; LAB_0047fe02
    CMP dword ptr [EBX + 0x2dc],0x1     ; 0047fea2
        ;   Label: caseD_2
    JZ 0x0047ff43                       ; 0047fea9
        ;   XREF to: 0047ff43 (CONDITIONAL_JUMP)  ; LAB_0047ff43
    FLD float ptr [EBX + 0x9ac]         ; 0047feaf
    FCHS                                ; 0047feb5
    FSTP float ptr [ESP + 0x34]         ; 0047feb7
    LEA EAX,[ESP + 0x34]                ; 0047febb
        ;   Label: LAB_0047febb
    PUSH EAX                            ; 0047febf
    LEA EAX,[ESP + 0xb0]                ; 0047fec0
    XOR EDI,EDI                         ; 0047fec7
    PUSH EAX                            ; 0047fec9
    LEA EAX,[EBX + 0x3c]                ; 0047feca
    MOV dword ptr [ESP + 0x40],EDI      ; 0047fecd
    PUSH EAX                            ; 0047fed1
    LEA ESI,[EBX + 0x994]               ; 0047fed2
    MOV dword ptr [ESP + 0x48],EDI      ; 0047fed8
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0 ; 0047fedc
        ;   XREF to: 00471fd0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    FLD float ptr [ESI]                 ; 0047fee1
    FADD float ptr [EAX]                ; 0047fee3
    ADD ESP,0xc                         ; 0047fee5
    FSTP float ptr [ESP + 0x58]         ; 0047fee8
    FLD float ptr [ESI + 0x4]           ; 0047feec
    FADD float ptr [EAX + 0x4]          ; 0047feef
    FSTP float ptr [ESP + 0x5c]         ; 0047fef2
    FLD float ptr [ESI + 0x8]           ; 0047fef6
    LEA ESI,[EBX + 0x20]                ; 0047fef9
    FADD float ptr [EAX + 0x8]          ; 0047fefc
    MOV EAX,dword ptr [ESP + 0x58]      ; 0047feff
    FSTP float ptr [ESP + 0x60]         ; 0047ff03
    MOV dword ptr [ESI],EAX             ; 0047ff07
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0047ff09
    MOV dword ptr [ESI + 0x4],EAX       ; 0047ff0d
    MOV EAX,dword ptr [ESP + 0x60]      ; 0047ff10
    MOV dword ptr [ESI + 0x8],EAX       ; 0047ff14
    LEA EAX,[ESP + 0x4c]                ; 0047ff17
    PUSH EAX                            ; 0047ff1b
    LEA EAX,[ESP + 0x74]                ; 0047ff1c
    PUSH EAX                            ; 0047ff20
    MOV ECX,0x40600000                  ; 0047ff21
    MOV dword ptr [ESP + 0x54],EDI      ; 0047ff26
    PUSH EBX                            ; 0047ff2a
    MOV dword ptr [ESP + 0x5c],ECX      ; 0047ff2b
    MOV dword ptr [ESP + 0x60],EDI      ; 0047ff2f
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 0047ff33
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    LEA ESI,[EBX + 0x9bc]               ; 0047ff38
    JMP 0x0047fe02                      ; 0047ff3e
        ;   XREF to: 0047fe02 (UNCONDITIONAL_JUMP)  ; LAB_0047fe02
    MOV EAX,dword ptr [EBX + 0x9ac]     ; 0047ff43
        ;   Label: LAB_0047ff43
    MOV dword ptr [ESP + 0x34],EAX      ; 0047ff49
    JMP 0x0047febb                      ; 0047ff4d
        ;   XREF to: 0047febb (UNCONDITIONAL_JUMP)  ; LAB_0047febb
    FLD float ptr [EBX + 0x9ac]         ; 0047ff52
        ;   Label: caseD_3
    FMUL double ptr [0x00621139]        ; 0047ff58 | DOUBLE_00621139
    PUSH EBX                            ; 0047ff5e
    FSTP float ptr [EBX + 0x30]         ; 0047ff5f
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10 ; 0047ff62
        ;   XREF to: 00408c10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0047ff67
    FLD float ptr [ESP + 0x14]          ; 0047ff6a
    FLD float ptr [ESP + 0x10]          ; 0047ff6e
    FADD float ptr [ESP + 0x1c]         ; 0047ff72
    FXCH                                ; 0047ff76
    FADD float ptr [ESP + 0x20]         ; 0047ff78
    FXCH                                ; 0047ff7c
    FST float ptr [ESP + 0x28]          ; 0047ff7e
    FLD float ptr [0x00621141]          ; 0047ff82 | FLOAT_00621141
    FXCH                                ; 0047ff88
    FMUL ST1                            ; 0047ff8a
    FXCH ST2                            ; 0047ff8c
    FST float ptr [ESP + 0x2c]          ; 0047ff8e
    FMUL ST1                            ; 0047ff92
    LEA EAX,[ESP + 0x7c]                ; 0047ff94
    FLD float ptr [ESP + 0x18]          ; 0047ff98
    PUSH EAX                            ; 0047ff9c
    FADD float ptr [ESP + 0x28]         ; 0047ff9d
    LEA EAX,[ESP + 0xa4]                ; 0047ffa1
    FST float ptr [ESP + 0x34]          ; 0047ffa8
    PUSH EAX                            ; 0047ffac
    FMULP ST2                           ; 0047ffad
    PUSH EBX                            ; 0047ffaf
    FXCH ST2                            ; 0047ffb0
    FSTP float ptr [ESP + 0x88]         ; 0047ffb2
    FXCH                                ; 0047ffb9
    FSTP float ptr [ESP + 0x8c]         ; 0047ffbb
    FSTP float ptr [ESP + 0x90]         ; 0047ffc2
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 0047ffc9
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    LEA ESI,[EBX + 0x9bc]               ; 0047ffce
    JMP 0x0047fe02                      ; 0047ffd4
        ;   XREF to: 0047fe02 (UNCONDITIONAL_JUMP)  ; LAB_0047fe02
    MOV EDX,0x621105                    ; 0047ffd9 | = "..\\core\\door.cpp"
        ;   Label: default
    MOV ECX,0xf8                        ; 0047ffde
    PUSH 0x621116                       ; 0047ffe3 | = "CDoor::reposition - Unknown type"
    MOV dword ptr [0x02f0ca48],EDX      ; 0047ffe8 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 0047ffee | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0047fff4
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0047fff9
    JMP 0x0047fe19                      ; 0047fffc
        ;   XREF to: 0047fe19 (UNCONDITIONAL_JUMP)  ; LAB_0047fe19
    PUSH dword ptr [EBX + 0x9cc]        ; 00480001
        ;   Label: LAB_00480001
    FLD float ptr [EBX + 0x9cc]         ; 00480007
    SUB ESP,0x4                         ; 0048000d
    FCHS                                ; 00480010
    FSTP float ptr [ESP]                ; 00480012
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 00480015
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0xcc],EAX      ; 0048001a
    XOR ESI,ESI                         ; 00480021
    FLD float ptr [ESP + 0xcc]          ; 00480023
    ADD ESP,0x8                         ; 0048002a
    MOV dword ptr [ESP + 0xbc],ESI      ; 0048002d
    FSTP float ptr [ESP + 0xb8]         ; 00480034
    PUSH dword ptr [EBX + 0x9cc]        ; 0048003b
    FLD float ptr [EBX + 0x9cc]         ; 00480041
    SUB ESP,0x4                         ; 00480047
    FCHS                                ; 0048004a
    FSTP float ptr [ESP]                ; 0048004c
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 0048004f
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0xcc],EAX      ; 00480054
    FLD float ptr [ESP + 0xcc]          ; 0048005b
    ADD ESP,0x8                         ; 00480062
    LEA EAX,[ESP + 0xb8]                ; 00480065
    PUSH EAX                            ; 0048006c
    LEA EAX,[ESP + 0x44]                ; 0048006d
    PUSH EAX                            ; 00480071
    PUSH EBX                            ; 00480072
    FSTP float ptr [ESP + 0xcc]         ; 00480073
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80 ; 0048007a
        ;   XREF to: 00408e80 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_00408e80(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
    MOV ESI,EAX                         ; 0048007f
    LEA EAX,[EBX + 0x20]                ; 00480081
    FLD float ptr [ESI]                 ; 00480084
    FADD float ptr [EAX]                ; 00480086
    FSTP float ptr [EAX]                ; 00480088
    FLD float ptr [ESI + 0x4]           ; 0048008a
    FADD float ptr [EAX + 0x4]          ; 0048008d
    FSTP float ptr [EAX + 0x4]          ; 00480090
    FLD float ptr [ESI + 0x8]           ; 00480093
    FADD float ptr [EAX + 0x8]          ; 00480096
    ADD ESP,0xc                         ; 00480099
    FSTP float ptr [EAX + 0x8]          ; 0048009c
    MOV dword ptr [EBX + 0x9cc],0x0     ; 0048009f
    MOV ESP,EBP                         ; 004800a9
    POP EBP                             ; 004800ab
    POP EDI                             ; 004800ac
    POP ESI                             ; 004800ad
    POP EBX                             ; 004800ae
    RET                                 ; 004800af

