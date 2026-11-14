; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double __crtmath crt_math_c_floor_FUN_005b84d0(double input_value)
;
; Parameters:
; double           Stack[0x4]:8   input_value
; Local Variables:
; undefined8       Stack[-0x18]:8  local_18
; undefined8       Stack[-0x10]:8  local_10
; undefined        Stack[-0x8]:1  local_8
;
; XREF[28]:
;   core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0 at 0040d107
;   core_bat.cpp_CBat_updateCoursePosition_FUN_004114e0 at 0041152c
;   core_boneguy.cpp_hsvToRgb_FUN_00418110 at 00418238
;   core_boxactor.cpp_CBoxActor_process_FUN_0041c090 at 0041c0cf
;   core_bugs.cpp_CBugs_updateGroundHeightGrid_FUN_0041fad0 at 0041fbb2
;   core_course.cpp_FUN_00438cf0 at 00438ee8
;   core_dtrace.cpp_CDemonRaytrace_worldPositionToGridCoords_FUN_004769a0 at 004769bd
;   core_dtrace.cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00476a50 at 00476a6d
;   core_dtrace.cpp_FUN_00472c60 at 00472cb9
;   core_dtrace.cpp_FUN_00473390 at 00473414
;   ... and 18 more
;
; Referenced Globals:
;   undefined4 DAT_005f184c
;
; Called Functions:
;   crt_math.c_modf_FUN_005bada6
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005b84d0
        ;   Label: crt_math.c_floor_FUN_005b84d0
    MOV EBP,ESP                         ; 005b84d1
    PUSH EBX                            ; 005b84d3
    SUB ESP,0x10                        ; 005b84d4
    LEA EAX,[EBP + -0x14]               ; 005b84d7
    PUSH EAX                            ; 005b84da
    MOV EDX,dword ptr [EBP + 0xc]       ; 005b84db
    PUSH EDX                            ; 005b84de
    MOV EBX,dword ptr [EBP + 0x8]       ; 005b84df
    PUSH EBX                            ; 005b84e2
    CALL crt_math.c_modf_FUN_005bada6   ; 005b84e3
        ;   XREF to: 005bada6 (UNCONDITIONAL_CALL)  ; double crt_math.c_modf_FUN_005bada6(double value, double * integer_part)
    MOV dword ptr [EBP + -0xc],EAX      ; 005b84e8
    MOV dword ptr [EBP + -0x8],EDX      ; 005b84eb
    ADD ESP,0xc                         ; 005b84ee
    FLD double ptr [EBP + -0xc]         ; 005b84f1
    FLDZ                                ; 005b84f4
    FCOMPP                              ; 005b84f6
    FNSTSW AX                           ; 005b84f8
    SAHF                                ; 005b84fa
    JBE 0x005b8509                      ; 005b84fb
        ;   XREF to: 005b8509 (CONDITIONAL_JUMP)  ; LAB_005b8509
    FLD double ptr [EBP + -0x14]        ; 005b84fd
    FADD double ptr [0x005f184c]        ; 005b8500 | DAT_005f184c
    FSTP double ptr [EBP + -0x14]       ; 005b8506
    MOV EAX,dword ptr [EBP + -0x14]     ; 005b8509
        ;   Label: LAB_005b8509
    MOV EDX,dword ptr [EBP + -0x10]     ; 005b850c
    LEA ESP,[EBP + -0x4]                ; 005b850f
    POP EBX                             ; 005b8512
    POP EBP                             ; 005b8513
    RET                                 ; 005b8514

