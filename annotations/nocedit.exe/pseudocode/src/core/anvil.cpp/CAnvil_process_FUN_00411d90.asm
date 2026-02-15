; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_anvil_cpp_CAnvil_process_FUN_00411d90(CAnvil *this_ptr,float delta_time)
;
; Parameters:
; CAnvil *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined1       Stack[-0x48]:1  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; Referenced Globals:
;   double DOUBLE_00614d2b = 32
;   double DOUBLE_00614d33 = 6
;   CEventList* g_CEventListPtr = 02d05310
;   CEventList g_CEventListInstance
;   CHero*[4] g_HeroActors
;   int g_LocalHeroIndex
;
; Called Functions:
;   core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
;   core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00411d90
        ;   Label: core_anvil.cpp_CAnvil_process_FUN_00411d90
    SUB ESP,0x44                        ; 00411d91
    MOV EBX,dword ptr [ESP + 0x4c]      ; 00411d94
    LEA EAX,[EBX + 0x2d4]               ; 00411d98
    PUSH EAX                            ; 00411d9e
    MOV EDX,dword ptr [0x006793d0]      ; 00411d9f | g_CEventListInstance | g_CEventListPtr
    PUSH EDX                            ; 00411da5 | g_CEventListInstance
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 00411da6
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00411dab
    TEST EAX,EAX                        ; 00411dae
    JNZ 0x00411e23                      ; 00411db0
        ;   XREF to: 00411e23 (CONDITIONAL_JUMP)  ; LAB_00411e23
    CMP dword ptr [EBX + 0x33c],0x0     ; 00411db2
        ;   Label: LAB_00411db2
    JZ 0x00411e1e                       ; 00411db9
        ;   XREF to: 00411e1e (CONDITIONAL_JUMP)  ; LAB_00411e1e
    FLD float ptr [ESP + 0x50]          ; 00411dbb
    FMUL double ptr [0x00614d2b]        ; 00411dbf | DOUBLE_00614d2b
    FSUBR float ptr [EBX + 0x340]       ; 00411dc5
    FST float ptr [EBX + 0x340]         ; 00411dcb
    FADD float ptr [EBX + 0x24]         ; 00411dd1
    MOV EDX,dword ptr [0x02db87d0]      ; 00411dd4 | g_LocalHeroIndex
    FSTP float ptr [EBX + 0x24]         ; 00411dda
    MOV EDX,dword ptr [EDX*0x4 + 0x2db87c0] ; 00411ddd | g_HeroActors
    FLD float ptr [EBX + 0x24]          ; 00411de4
    FCOMP float ptr [EDX + 0x24]        ; 00411de7
    FNSTSW AX                           ; 00411dea
    SAHF                                ; 00411dec
    JNC 0x00411dff                      ; 00411ded
        ;   XREF to: 00411dff (CONDITIONAL_JUMP)  ; LAB_00411dff
    MOV EAX,dword ptr [EDX + 0x24]      ; 00411def
    MOV dword ptr [EBX + 0x24],EAX      ; 00411df2
    MOV dword ptr [EBX + 0x340],0x0     ; 00411df5
    MOV EAX,[0x02db87d0]                ; 00411dff | g_LocalHeroIndex
        ;   Label: LAB_00411dff
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 00411e04 | g_HeroActors
    FLD float ptr [EAX + 0x24]          ; 00411e0b
    FADD double ptr [0x00614d33]        ; 00411e0e | DOUBLE_00614d33
    FLD float ptr [EBX + 0x24]          ; 00411e14
    FCOMPP                              ; 00411e17
    FNSTSW AX                           ; 00411e19
    SAHF                                ; 00411e1b
    JC 0x00411e64                       ; 00411e1c
        ;   XREF to: 00411e64 (CONDITIONAL_JUMP)  ; LAB_00411e64
    ADD ESP,0x44                        ; 00411e1e
        ;   Label: LAB_00411e1e
    POP EBX                             ; 00411e21
    RET                                 ; 00411e22
    MOV EAX,[0x02db87d0]                ; 00411e23 | g_LocalHeroIndex
        ;   Label: LAB_00411e23
    MOV dword ptr [EBX + 0x33c],0x1     ; 00411e28
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 00411e32 | g_HeroActors
    LEA EDX,[EBX + 0x20]                ; 00411e39
    MOV ECX,dword ptr [EAX + 0x20]      ; 00411e3c
    MOV dword ptr [EDX],ECX             ; 00411e3f
    MOV ECX,dword ptr [EAX + 0x24]      ; 00411e41
    MOV dword ptr [EDX + 0x4],ECX       ; 00411e44
    MOV ECX,dword ptr [EAX + 0x28]      ; 00411e47
    MOV dword ptr [EDX + 0x8],ECX       ; 00411e4a
    MOV EAX,dword ptr [EAX + 0x2c]      ; 00411e4d
    MOV dword ptr [EDX + 0xc],EAX       ; 00411e50
    FLD float ptr [EBX + 0x338]         ; 00411e53
    FADD float ptr [EBX + 0x24]         ; 00411e59
    FSTP float ptr [EBX + 0x24]         ; 00411e5c
    JMP 0x00411db2                      ; 00411e5f
        ;   XREF to: 00411db2 (UNCONDITIONAL_JUMP)  ; LAB_00411db2
    PUSH EDI                            ; 00411e64
        ;   Label: LAB_00411e64
    PUSH ESI                            ; 00411e65
    LEA EAX,[ESP + 0x8]                 ; 00411e66
    PUSH EAX                            ; 00411e6a
    MOV ESI,0x461c3f9a                  ; 00411e6b
    MOV EDI,0x8                         ; 00411e70
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0 ; 00411e75
        ;   XREF to: 00427db0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo * this_ptr)
    LEA EDX,[ESP + 0xc]                 ; 00411e7a
    ADD ESP,0x4                         ; 00411e7e
    MOV EAX,[0x02db87d0]                ; 00411e81 | g_LocalHeroIndex
    MOV dword ptr [ESP + 0xc],ESI       ; 00411e86
    MOV dword ptr [ESP + 0x38],EDI      ; 00411e8a
    MOV dword ptr [ESP + 0x3c],EBX      ; 00411e8e
    PUSH EDX                            ; 00411e92
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 00411e93 | g_HeroActors
    MOV dword ptr [ESP + 0x44],EBX      ; 00411e9a
    PUSH EAX                            ; 00411e9e
    MOV EBX,dword ptr [EAX + 0x154]     ; 00411e9f
    CALL dword ptr [EBX + 0x11c]        ; 00411ea5
    ADD ESP,0x8                         ; 00411eab
    POP ESI                             ; 00411eae
    POP EDI                             ; 00411eaf
    ADD ESP,0x44                        ; 00411eb0
    POP EBX                             ; 00411eb3
    RET                                 ; 00411eb4

