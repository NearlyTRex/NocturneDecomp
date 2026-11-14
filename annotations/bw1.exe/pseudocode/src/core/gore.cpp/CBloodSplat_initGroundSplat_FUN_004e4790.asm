; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_CBloodSplat_initGroundSplat_FUN_004e4790(CBloodSplat *this_ptr,CVector3f *position,EBloodType blood_type)
;
; Parameters:
; CBloodSplat *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; EBloodType       Stack[0xc]:4   blood_type
;
; XREF[1]:
;   core_gore.cpp_CGore_createGroundBloodSplat_FUN_004e5ff0 at 004e6012
;
; Referenced Globals:
;   undefined4 DAT_006016a8
;
; Called Functions:
;   core_actor.cpp_getRandomInt_FUN_0040cc60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e4790
        ;   Label: core_gore.cpp_CBloodSplat_initGroundSplat_FUN_004e4790
    PUSH ESI                            ; 004e4791
    PUSH EDI                            ; 004e4792
    MOV ESI,dword ptr [ESP + 0x10]      ; 004e4793
    MOV EDI,dword ptr [ESP + 0x14]      ; 004e4797
    LEA EAX,[ESI + 0x4]                 ; 004e479b
    MOV dword ptr [ESI + 0x10],0x0      ; 004e479e
    CMP EAX,EDI                         ; 004e47a5
    JZ 0x004e47b9                       ; 004e47a7
        ;   XREF to: 004e47b9 (CONDITIONAL_JUMP)  ; LAB_004e47b9
    MOV EDX,dword ptr [EDI]             ; 004e47a9
    MOV dword ptr [EAX],EDX             ; 004e47ab
    MOV EDX,dword ptr [EDI + 0x4]       ; 004e47ad
    MOV dword ptr [EAX + 0x4],EDX       ; 004e47b0
    MOV EDX,dword ptr [EDI + 0x8]       ; 004e47b3
    MOV dword ptr [EAX + 0x8],EDX       ; 004e47b6
    PUSH 0x3                            ; 004e47b9
        ;   Label: LAB_004e47b9
    PUSH 0x0                            ; 004e47bb
    LEA EBX,[ESI + 0x2c]                ; 004e47bd
    CALL core_actor.cpp_getRandomInt_FUN_0040cc60 ; 004e47c0
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 004e47c5
    MOV dword ptr [ESI + 0x28],EAX      ; 004e47c8
    MOV EAX,EDI                         ; 004e47cb
    MOV dword ptr [ESI + 0x24],0x0      ; 004e47cd
    FLD float ptr [EAX]                 ; 004e47d4
    FMUL float ptr [0x006016a8]         ; 004e47d6 | DAT_006016a8
    FISTP dword ptr [EBX]               ; 004e47dc
    FLD float ptr [EAX + 0x4]           ; 004e47de
    FMUL float ptr [0x006016a8]         ; 004e47e1 | DAT_006016a8
    FISTP dword ptr [EBX + 0x4]         ; 004e47e7
    FLD float ptr [EAX + 0x8]           ; 004e47ea
    FMUL float ptr [0x006016a8]         ; 004e47ed | DAT_006016a8
    FISTP dword ptr [EBX + 0x8]         ; 004e47f3
    MOV dword ptr [ESI + 0x38],0x0      ; 004e47f6
    MOV dword ptr [ESI + 0x3c],0xffff   ; 004e47fd
    MOV dword ptr [ESI + 0x40],0x0      ; 004e4804
    MOV dword ptr [ESI],0x0             ; 004e480b
    MOV EAX,dword ptr [ESP + 0x18]      ; 004e4811
    MOV dword ptr [ESI + 0x20],0x0      ; 004e4815
    MOV dword ptr [ESI + 0x14],EAX      ; 004e481c
    MOV EAX,dword ptr [ESI + 0x20]      ; 004e481f
    MOV dword ptr [ESI + 0x1c],EAX      ; 004e4822
    MOV EAX,dword ptr [ESI + 0x1c]      ; 004e4825
    MOV dword ptr [ESI + 0x18],EAX      ; 004e4828
    POP EDI                             ; 004e482b
    POP ESI                             ; 004e482c
    POP EBX                             ; 004e482d
    RET                                 ; 004e482e

