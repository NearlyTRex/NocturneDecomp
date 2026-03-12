; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_CBloodPool_init_FUN_004ed0d0(CBloodPool *this_ptr,CVector3f *position,int blood_type)
;
; Parameters:
; CBloodPool *     Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; int              Stack[0xc]:4   blood_type
;
; XREF[1]:
;   core_gore.cpp_CGore_createBloodPool_FUN_004ede30 at 004ede52
;
; Referenced Globals:
;   float FLOAT_0062e39a = 0.1000000
;   float FLOAT_0065f024 = 256
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_actor.cpp_getRandomInt_FUN_0040cc70
;   core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ed0d0
        ;   Label: core_gore.cpp_CBloodPool_init_FUN_004ed0d0
    PUSH ESI                            ; 004ed0d1
    SUB ESP,0x4                         ; 004ed0d2
    MOV ESI,dword ptr [ESP + 0x10]      ; 004ed0d5
    MOV EBX,dword ptr [ESP + 0x14]      ; 004ed0d9
    PUSH 0x3                            ; 004ed0dd
    PUSH 0x0                            ; 004ed0df
    CALL core_actor.cpp_getRandomInt_FUN_0040cc70 ; 004ed0e1
        ;   XREF to: 0040cc70 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc70(int min_value, int max_value)
    ADD ESP,0x8                         ; 004ed0e6
    MOV EDX,dword ptr [0x006810c8]      ; 004ed0e9 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH 0x0                            ; 004ed0ef
    MOV dword ptr [ESI + 0x14],EAX      ; 004ed0f1
    PUSH EBX                            ; 004ed0f4
    FLD float ptr [EBX]                 ; 004ed0f5
    PUSH EDX                            ; 004ed0f7 | g_CDemonSetInstance
    FSTP float ptr [ESI + 0x4]          ; 004ed0f8
    CALL core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0 ; 004ed0fb
        ;   XREF to: 005716b0 (UNCONDITIONAL_CALL)  ; float core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0(CDemonSet * this_ptr, CVector3f * position, float radius)
    MOV dword ptr [ESP + 0xc],EAX       ; 004ed100
    FLD float ptr [ESP + 0xc]           ; 004ed104
    LEA EAX,[ESI + 0x4]                 ; 004ed108
    FSTP float ptr [ESI + 0x8]          ; 004ed10b
    ADD ESP,0xc                         ; 004ed10e
    FLD float ptr [ESI + 0x8]           ; 004ed111
    MOV EDX,dword ptr [EBX + 0x8]       ; 004ed114
    MOV dword ptr [ESI + 0xc],EDX       ; 004ed117
    MOV dword ptr [ESI + 0x18],0x0      ; 004ed11a
    FADD float ptr [0x0062e39a]         ; 004ed121 | FLOAT_0062e39a
    LEA EBX,[ESI + 0x1c]                ; 004ed127
    FSTP float ptr [ESI + 0x8]          ; 004ed12a
    FLD float ptr [EAX]                 ; 004ed12d
    FMUL float ptr [0x0065f024]         ; 004ed12f | FLOAT_0065f024
    FISTP dword ptr [EBX]               ; 004ed135
    FLD float ptr [EAX + 0x4]           ; 004ed137
    FMUL float ptr [0x0065f024]         ; 004ed13a | FLOAT_0065f024
    FISTP dword ptr [EBX + 0x4]         ; 004ed140
    FLD float ptr [EAX + 0x8]           ; 004ed143
    FMUL float ptr [0x0065f024]         ; 004ed146 | FLOAT_0065f024
    FISTP dword ptr [EBX + 0x8]         ; 004ed14c
    MOV EAX,dword ptr [ESP + 0x18]      ; 004ed14f
    MOV dword ptr [ESI + 0x10],EAX      ; 004ed153
    ADD ESP,0x4                         ; 004ed156
    POP ESI                             ; 004ed159
    POP EBX                             ; 004ed15a
    RET                                 ; 004ed15b

