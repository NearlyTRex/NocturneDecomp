; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_CBloodSplat_initGroundSplat_FUN_004ec2f0(CBloodSplat *this_ptr,CVector3f *position,int blood_type)
;
; Parameters:
; CBloodSplat *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; int              Stack[0xc]:4   blood_type
;
; XREF[1]:
;   core_gore.cpp_CGore_createGroundBloodSplat_FUN_004edb40 at 004edb62
;
; Referenced Globals:
;   float FLOAT_0065f024 = 256
;
; Called Functions:
;   core_actor.cpp_getRandomInt_FUN_0040cc70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ec2f0
        ;   Label: core_gore.cpp_CBloodSplat_initGroundSplat_FUN_004ec2f0
    PUSH ESI                            ; 004ec2f1
    PUSH EDI                            ; 004ec2f2
    MOV ESI,dword ptr [ESP + 0x10]      ; 004ec2f3
    MOV EDI,dword ptr [ESP + 0x14]      ; 004ec2f7
    LEA EAX,[ESI + 0x4]                 ; 004ec2fb
    MOV dword ptr [ESI + 0x10],0x0      ; 004ec2fe
    CMP EAX,EDI                         ; 004ec305
    JZ 0x004ec319                       ; 004ec307
        ;   XREF to: 004ec319 (CONDITIONAL_JUMP)  ; LAB_004ec319
    MOV EDX,dword ptr [EDI]             ; 004ec309
    MOV dword ptr [EAX],EDX             ; 004ec30b
    MOV EDX,dword ptr [EDI + 0x4]       ; 004ec30d
    MOV dword ptr [EAX + 0x4],EDX       ; 004ec310
    MOV EDX,dword ptr [EDI + 0x8]       ; 004ec313
    MOV dword ptr [EAX + 0x8],EDX       ; 004ec316
    PUSH 0x3                            ; 004ec319
        ;   Label: LAB_004ec319
    PUSH 0x0                            ; 004ec31b
    LEA EBX,[ESI + 0x2c]                ; 004ec31d
    CALL core_actor.cpp_getRandomInt_FUN_0040cc70 ; 004ec320
        ;   XREF to: 0040cc70 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc70(int min_value, int max_value)
    ADD ESP,0x8                         ; 004ec325
    MOV dword ptr [ESI + 0x28],EAX      ; 004ec328
    MOV EAX,EDI                         ; 004ec32b
    MOV dword ptr [ESI + 0x24],0x0      ; 004ec32d
    FLD float ptr [EAX]                 ; 004ec334
    FMUL float ptr [0x0065f024]         ; 004ec336 | FLOAT_0065f024
    FISTP dword ptr [EBX]               ; 004ec33c
    FLD float ptr [EAX + 0x4]           ; 004ec33e
    FMUL float ptr [0x0065f024]         ; 004ec341 | FLOAT_0065f024
    FISTP dword ptr [EBX + 0x4]         ; 004ec347
    FLD float ptr [EAX + 0x8]           ; 004ec34a
    FMUL float ptr [0x0065f024]         ; 004ec34d | FLOAT_0065f024
    FISTP dword ptr [EBX + 0x8]         ; 004ec353
    MOV dword ptr [ESI + 0x38],0x0      ; 004ec356
    MOV dword ptr [ESI + 0x3c],0xffff   ; 004ec35d
    MOV dword ptr [ESI + 0x40],0x0      ; 004ec364
    MOV dword ptr [ESI],0x0             ; 004ec36b
    MOV EAX,dword ptr [ESP + 0x18]      ; 004ec371
    MOV dword ptr [ESI + 0x20],0x0      ; 004ec375
    MOV dword ptr [ESI + 0x14],EAX      ; 004ec37c
    MOV EAX,dword ptr [ESI + 0x20]      ; 004ec37f
    MOV dword ptr [ESI + 0x1c],EAX      ; 004ec382
    MOV EAX,dword ptr [ESI + 0x1c]      ; 004ec385
    MOV dword ptr [ESI + 0x18],EAX      ; 004ec388
    POP EDI                             ; 004ec38b
    POP ESI                             ; 004ec38c
    POP EBX                             ; 004ec38d
    RET                                 ; 004ec38e

