; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_simbox.cpp_CSimBox_process_FUN_00588f20(CSimBox * this_ptr, float delta_time)
;
; Parameters:
; CSimBox *        Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined1       Stack[-0x18]:1  local_18
;
; Referenced Globals:
;   float FLOAT_00649c02 = 0.00003051851
;   double DOUBLE_00649c0a = -0.5
;   double DOUBLE_00649c12 = 3.14159265350000
;   double DOUBLE_00649c1a = 2
;   CEventList* g_CEventListPtr = 02d05310
;   CKeys* g_CKeysPtr = 02dcd7d4
;   CEventList g_CEventListInstance
;   CKeys g_CKeysInstance
;
; Called Functions:
;   core_box.cpp_CBox_process_FUN_0041e2f0
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
;   core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
;   crt_stdlib.c_rand_FUN_005feb5c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00588f20
        ;   Label: core_simbox.cpp_CSimBox_process_FUN_00588f20
    PUSH ESI                            ; 00588f21
    SUB ESP,0x10                        ; 00588f22
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00588f25
    CMP dword ptr [EBX + 0x2d4],0x1     ; 00588f29
    JNZ 0x00588fe0                      ; 00588f30
        ;   XREF to: 00588fe0 (CONDITIONAL_JUMP)  ; LAB_00588fe0
    CMP dword ptr [EBX + 0x5ac],0x0     ; 00588f36
    JNZ 0x00588fe0                      ; 00588f3d
        ;   XREF to: 00588fe0 (CONDITIONAL_JUMP)  ; LAB_00588fe0
    LEA EAX,[EBX + 0x2dc]               ; 00588f43
    PUSH EAX                            ; 00588f49
    MOV ESI,dword ptr [0x006793d0]      ; 00588f4a | g_CEventListPtr
    PUSH ESI                            ; 00588f50 | g_CEventListInstance
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 00588f51
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00588f56
    TEST EAX,EAX                        ; 00588f59
    JZ 0x00588fe0                       ; 00588f5b
        ;   XREF to: 00588fe0 (CONDITIONAL_JUMP)  ; LAB_00588fe0
    LEA EAX,[EBX + 0x3a4]               ; 00588f61
    LEA ESI,[EBX + 0x340]               ; 00588f67
    MOV dword ptr [EBX + 0x5ac],0x1     ; 00588f6d
    CMP EAX,ESI                         ; 00588f77
    JZ 0x00588f8b                       ; 00588f79
        ;   XREF to: 00588f8b (CONDITIONAL_JUMP)  ; LAB_00588f8b
    MOV EDX,dword ptr [ESI]             ; 00588f7b
    MOV dword ptr [EAX],EDX             ; 00588f7d
    MOV EDX,dword ptr [ESI + 0x4]       ; 00588f7f
    MOV dword ptr [EAX + 0x4],EDX       ; 00588f82
    MOV EDX,dword ptr [ESI + 0x8]       ; 00588f85
    MOV dword ptr [EAX + 0x8],EDX       ; 00588f88
    LEA EAX,[EBX + 0x3c8]               ; 00588f8b
        ;   Label: LAB_00588f8b
    LEA ESI,[EBX + 0x34c]               ; 00588f91
    CMP EAX,ESI                         ; 00588f97
    JZ 0x00588fab                       ; 00588f99
        ;   XREF to: 00588fab (CONDITIONAL_JUMP)  ; LAB_00588fab
    MOV EDX,dword ptr [ESI]             ; 00588f9b
    MOV dword ptr [EAX],EDX             ; 00588f9d
    MOV EDX,dword ptr [ESI + 0x4]       ; 00588f9f
    MOV dword ptr [EAX + 0x4],EDX       ; 00588fa2
    MOV EDX,dword ptr [ESI + 0x8]       ; 00588fa5
    MOV dword ptr [EAX + 0x8],EDX       ; 00588fa8
    LEA EAX,[EBX + 0x3a4]               ; 00588fab
        ;   Label: LAB_00588fab
    PUSH EAX                            ; 00588fb1
    LEA EAX,[ESP + 0x4]                 ; 00588fb2
    PUSH EAX                            ; 00588fb6
    LEA EAX,[EBX + 0x370]               ; 00588fb7
    PUSH EAX                            ; 00588fbd
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0 ; 00588fbe
        ;   XREF to: 00471fd0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    LEA ESI,[EBX + 0x398]               ; 00588fc3
    ADD ESP,0xc                         ; 00588fc9
    CMP ESI,EAX                         ; 00588fcc
    JZ 0x00588fe0                       ; 00588fce
        ;   XREF to: 00588fe0 (CONDITIONAL_JUMP)  ; LAB_00588fe0
    MOV EDX,dword ptr [EAX]             ; 00588fd0
    MOV dword ptr [ESI],EDX             ; 00588fd2
    MOV EDX,dword ptr [EAX + 0x4]       ; 00588fd4
    MOV dword ptr [ESI + 0x4],EDX       ; 00588fd7
    MOV EDX,dword ptr [EAX + 0x8]       ; 00588fda
    MOV dword ptr [ESI + 0x8],EDX       ; 00588fdd
    CMP dword ptr [EBX + 0x2d4],0x0     ; 00588fe0
        ;   Label: LAB_00588fe0
    JNZ 0x0058908f                      ; 00588fe7
        ;   XREF to: 0058908f (CONDITIONAL_JUMP)  ; LAB_0058908f
    PUSH 0x13                           ; 00588fed
    MOV EAX,[0x0067cf44]                ; 00588fef | g_CKeysPtr
    PUSH EAX                            ; 00588ff4 | g_CKeysInstance
    MOV ESI,dword ptr [EAX]             ; 00588ff5 | g_CKeysInstance
    CALL dword ptr [ESI]                ; 00588ff7
    ADD ESP,0x8                         ; 00588ff9
    TEST EAX,EAX                        ; 00588ffc
    JZ 0x0058908f                       ; 00588ffe
        ;   XREF to: 0058908f (CONDITIONAL_JUMP)  ; LAB_0058908f
    LEA ESI,[EBX + 0x20]                ; 00589004
    LEA EAX,[EBX + 0x5b4]               ; 00589007
    MOV EDX,dword ptr [EAX]             ; 0058900d
    MOV dword ptr [ESI],EDX             ; 0058900f
    MOV EDX,dword ptr [EAX + 0x4]       ; 00589011
    MOV dword ptr [ESI + 0x4],EDX       ; 00589014
    MOV EDX,dword ptr [EAX + 0x8]       ; 00589017
    MOV dword ptr [ESI + 0x8],EDX       ; 0058901a
    CALL crt_stdlib.c_rand_FUN_005feb5c ; 0058901d
        ;   XREF to: 005feb5c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005feb5c()
    MOV dword ptr [ESP + 0xc],EAX       ; 00589022
    FILD dword ptr [ESP + 0xc]          ; 00589026
    FMUL float ptr [0x00649c02]         ; 0058902a | FLOAT_00649c02
    FADD double ptr [0x00649c0a]        ; 00589030 | DOUBLE_00649c0a
    FMUL double ptr [0x00649c12]        ; 00589036 | DOUBLE_00649c12
    FSTP float ptr [EBX + 0x30]         ; 0058903c
    CALL crt_stdlib.c_rand_FUN_005feb5c ; 0058903f
        ;   XREF to: 005feb5c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005feb5c()
    MOV dword ptr [ESP + 0xc],EAX       ; 00589044
    FILD dword ptr [ESP + 0xc]          ; 00589048
    FMUL float ptr [0x00649c02]         ; 0058904c | FLOAT_00649c02
    FMUL double ptr [0x00649c12]        ; 00589052 | DOUBLE_00649c12
    FMUL double ptr [0x00649c1a]        ; 00589058 | DOUBLE_00649c1a
    FSTP float ptr [EBX + 0x38]         ; 0058905e
    CALL crt_stdlib.c_rand_FUN_005feb5c ; 00589061
        ;   XREF to: 005feb5c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005feb5c()
    MOV dword ptr [ESP + 0xc],EAX       ; 00589066
    FILD dword ptr [ESP + 0xc]          ; 0058906a
    FMUL float ptr [0x00649c02]         ; 0058906e | FLOAT_00649c02
    FMUL double ptr [0x00649c12]        ; 00589074 | DOUBLE_00649c12
    FMUL double ptr [0x00649c1a]        ; 0058907a | DOUBLE_00649c1a
    PUSH EBX                            ; 00589080
    MOV EAX,dword ptr [EBX + 0x154]     ; 00589081
    FSTP float ptr [EBX + 0x34]         ; 00589087
    CALL dword ptr [EAX]                ; 0058908a
    ADD ESP,0x4                         ; 0058908c
    CMP dword ptr [EBX + 0x5ac],0x0     ; 0058908f
        ;   Label: LAB_0058908f
    JNZ 0x0058909e                      ; 00589096
        ;   XREF to: 0058909e (CONDITIONAL_JUMP)  ; LAB_0058909e
    ADD ESP,0x10                        ; 00589098
        ;   Label: LAB_00589098
    POP ESI                             ; 0058909b
    POP EBX                             ; 0058909c
    RET                                 ; 0058909d
    LEA ESI,[EBX + 0x358]               ; 0058909e
        ;   Label: LAB_0058909e
    PUSH dword ptr [ESP + 0x20]         ; 005890a4
    PUSH ESI                            ; 005890a8
    CALL core_box.cpp_CBox_process_FUN_0041e2f0 ; 005890a9
        ;   XREF to: 0041e2f0 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBox_process_FUN_0041e2f0(CBox * this_ptr, float delta_time)
    LEA EAX,[EBX + 0x20]                ; 005890ae
    MOV EDX,dword ptr [ESI]             ; 005890b1
    MOV dword ptr [EAX],EDX             ; 005890b3
    MOV EDX,dword ptr [ESI + 0x4]       ; 005890b5
    MOV dword ptr [EAX + 0x4],EDX       ; 005890b8
    MOV EDX,dword ptr [ESI + 0x8]       ; 005890bb
    MOV dword ptr [EAX + 0x8],EDX       ; 005890be
    LEA EAX,[EBX + 0x30]                ; 005890c1
    ADD EBX,0x364                       ; 005890c4
    ADD ESP,0x8                         ; 005890ca
    CMP EAX,EBX                         ; 005890cd
    JZ 0x00589098                       ; 005890cf
        ;   XREF to: 00589098 (CONDITIONAL_JUMP)  ; LAB_00589098
    MOV EDX,dword ptr [EBX]             ; 005890d1
    MOV dword ptr [EAX],EDX             ; 005890d3
    MOV EDX,dword ptr [EBX + 0x4]       ; 005890d5
    MOV dword ptr [EAX + 0x4],EDX       ; 005890d8
    MOV EDX,dword ptr [EBX + 0x8]       ; 005890db
    MOV dword ptr [EAX + 0x8],EDX       ; 005890de
    ADD ESP,0x10                        ; 005890e1
    POP ESI                             ; 005890e4
    POP EBX                             ; 005890e5
    RET                                 ; 005890e6

