; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_FUN_004cdff0(CBloodPool *this_ptr,CVector3f *position,EBloodType blood_type)
;
; Parameters:
; CBloodPool *     Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; EBloodType       Stack[0xc]:4   blood_type
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_gore.cpp_FUN_004cec40 at 004cec62
;
; Referenced Globals:
;   undefined4 DAT_005c46e9
;   undefined4 DAT_005e0e18
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 DAT_01d5ba14
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_actor.cpp_getRandomInt_FUN_0040cea0
;   core_setcolid.cpp_FUN_0053bc80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cdff0
        ;   Label: core_gore.cpp_FUN_004cdff0
    PUSH ESI                            ; 004cdff1
    SUB ESP,0x4                         ; 004cdff2
    MOV ESI,dword ptr [ESP + 0x10]      ; 004cdff5
    MOV EBX,dword ptr [ESP + 0x14]      ; 004cdff9
    PUSH 0x3                            ; 004cdffd
    PUSH 0x0                            ; 004cdfff
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 004ce001
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 004ce006
    MOV EDX,dword ptr [0x00603b28]      ; 004ce009 | g_CDemonSetPtr
    PUSH 0x0                            ; 004ce00f
    MOV dword ptr [ESI + 0x18],EAX      ; 004ce011
    PUSH EBX                            ; 004ce014
    FLD float ptr [EBX]                 ; 004ce015
    PUSH EDX                            ; 004ce017 | g_CDemonSetInstance
    FSTP float ptr [ESI + 0x4]          ; 004ce018
    CALL core_setcolid.cpp_FUN_0053bc80 ; 004ce01b
        ;   XREF to: 0053bc80 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_0053bc80()
    MOV dword ptr [ESP + 0xc],EAX       ; 004ce020
    FLD float ptr [ESP + 0xc]           ; 004ce024
    LEA EAX,[ESI + 0x4]                 ; 004ce028
    FSTP float ptr [ESI + 0x8]          ; 004ce02b
    ADD ESP,0xc                         ; 004ce02e
    FLD float ptr [ESI + 0x8]           ; 004ce031
    MOV EDX,dword ptr [EBX + 0x8]       ; 004ce034
    MOV dword ptr [ESI + 0xc],EDX       ; 004ce037
    MOV dword ptr [ESI + 0x1c],0x0      ; 004ce03a
    FADD float ptr [0x005c46e9]         ; 004ce041 | DAT_005c46e9
    LEA EBX,[ESI + 0x20]                ; 004ce047
    FSTP float ptr [ESI + 0x8]          ; 004ce04a
    FLD float ptr [EAX]                 ; 004ce04d
    FMUL float ptr [0x005e0e18]         ; 004ce04f | DAT_005e0e18
    FISTP dword ptr [EBX]               ; 004ce055
    FLD float ptr [EAX + 0x4]           ; 004ce057
    FMUL float ptr [0x005e0e18]         ; 004ce05a | DAT_005e0e18
    FISTP dword ptr [EBX + 0x4]         ; 004ce060
    FLD float ptr [EAX + 0x8]           ; 004ce063
    FMUL float ptr [0x005e0e18]         ; 004ce066 | DAT_005e0e18
    FISTP dword ptr [EBX + 0x8]         ; 004ce06c
    MOV EAX,dword ptr [ESP + 0x18]      ; 004ce06f
    MOV dword ptr [ESI + 0x10],EAX      ; 004ce073
    MOV EAX,[0x01d5ba14]                ; 004ce076 | DAT_01d5ba14
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004ce07b
    MOV EAX,dword ptr [EAX + 0x2c]      ; 004ce082
    MOV dword ptr [ESI + 0x14],EAX      ; 004ce085
    ADD ESP,0x4                         ; 004ce088
    POP ESI                             ; 004ce08b
    POP EBX                             ; 004ce08c
    RET                                 ; 004ce08d

