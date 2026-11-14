; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_CBloodPool_init_FUN_004e5570(CBloodPool *this_ptr,CVector3f *position,EBloodType blood_type)
;
; Parameters:
; CBloodPool *     Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; EBloodType       Stack[0xc]:4   blood_type
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_gore.cpp_CGore_createBloodPool_FUN_004e62e0 at 004e6302
;
; Referenced Globals:
;   undefined4 DAT_005e40cd
;   undefined4 DAT_006016a8
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_actor.cpp_getRandomInt_FUN_0040cc60
;   core_setcolid.cpp_FUN_005562c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e5570
        ;   Label: core_gore.cpp_CBloodPool_init_FUN_004e5570
    PUSH ESI                            ; 004e5571
    SUB ESP,0x4                         ; 004e5572
    MOV ESI,dword ptr [ESP + 0x10]      ; 004e5575
    MOV EBX,dword ptr [ESP + 0x14]      ; 004e5579
    PUSH 0x3                            ; 004e557d
    PUSH 0x0                            ; 004e557f
    CALL core_actor.cpp_getRandomInt_FUN_0040cc60 ; 004e5581
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 004e5586
    MOV EDX,dword ptr [0x00622c18]      ; 004e5589 | g_CDemonSetPtr
    PUSH 0x0                            ; 004e558f
    MOV dword ptr [ESI + 0x14],EAX      ; 004e5591
    PUSH EBX                            ; 004e5594
    FLD float ptr [EBX]                 ; 004e5595
    PUSH EDX                            ; 004e5597 | g_CDemonSetInstance
    FSTP float ptr [ESI + 0x4]          ; 004e5598
    CALL core_setcolid.cpp_FUN_005562c0 ; 004e559b
        ;   XREF to: 005562c0 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_005562c0()
    MOV dword ptr [ESP + 0xc],EAX       ; 004e55a0
    FLD float ptr [ESP + 0xc]           ; 004e55a4
    LEA EAX,[ESI + 0x4]                 ; 004e55a8
    FSTP float ptr [ESI + 0x8]          ; 004e55ab
    ADD ESP,0xc                         ; 004e55ae
    FLD float ptr [ESI + 0x8]           ; 004e55b1
    MOV EDX,dword ptr [EBX + 0x8]       ; 004e55b4
    MOV dword ptr [ESI + 0xc],EDX       ; 004e55b7
    MOV dword ptr [ESI + 0x18],0x0      ; 004e55ba
    FADD float ptr [0x005e40cd]         ; 004e55c1 | DAT_005e40cd
    LEA EBX,[ESI + 0x1c]                ; 004e55c7
    FSTP float ptr [ESI + 0x8]          ; 004e55ca
    FLD float ptr [EAX]                 ; 004e55cd
    FMUL float ptr [0x006016a8]         ; 004e55cf | DAT_006016a8
    FISTP dword ptr [EBX]               ; 004e55d5
    FLD float ptr [EAX + 0x4]           ; 004e55d7
    FMUL float ptr [0x006016a8]         ; 004e55da | DAT_006016a8
    FISTP dword ptr [EBX + 0x4]         ; 004e55e0
    FLD float ptr [EAX + 0x8]           ; 004e55e3
    FMUL float ptr [0x006016a8]         ; 004e55e6 | DAT_006016a8
    FISTP dword ptr [EBX + 0x8]         ; 004e55ec
    MOV EAX,dword ptr [ESP + 0x18]      ; 004e55ef
    MOV dword ptr [ESI + 0x10],EAX      ; 004e55f3
    ADD ESP,0x4                         ; 004e55f6
    POP ESI                             ; 004e55f9
    POP EBX                             ; 004e55fa
    RET                                 ; 004e55fb

