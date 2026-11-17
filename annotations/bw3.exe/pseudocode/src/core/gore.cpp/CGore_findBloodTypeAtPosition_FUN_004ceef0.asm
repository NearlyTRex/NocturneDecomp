; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_gore_cpp_CGore_findBloodTypeAtPosition_FUN_004ceef0(CGore *this_ptr,CVector3f *position,int *out_blood_type)
;
; Parameters:
; CGore *          Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; int *            Stack[0xc]:4   out_blood_type
;
; XREF[1]:
;   core_actor.cpp_CDemonActor_handleFootstep_FUN_0040cab0 at 0040cb78
;
; Referenced Globals:
;   double g_DOUBLE_005c4781 = 0.5
;   double g_DOUBLE_005c4789 = 1.33300000000000
;   int g_INT_01d276b8
;   undefined4 g_CBloodSplat_ARRAY_01d276bc[0].is_wall_splat
;   undefined4 g_CBloodSplat_ARRAY_01d276bc[1].position.x
;   undefined4 g_CBloodSplat_ARRAY_01d276bc[1].position.y
;   undefined4 g_CBloodSplat_ARRAY_01d276bc[1].position.z
;   undefined4 g_CBloodSplat_ARRAY_01d276bc[1].area_id
;   undefined4 g_CBloodSplat_ARRAY_01d276bc[1].is_wall_splat
;   undefined4 g_CBloodSplat_ARRAY_01d276bc[1].blood_type
;   int g_INT_01d4a940
;   undefined4 g_CBloodPool_ARRAY_01d4a944[0].area_id
;   undefined4 g_CBloodPool_ARRAY_01d4a944[1].position.x
;   undefined4 g_CBloodPool_ARRAY_01d4a944[1].position.y
;   undefined4 g_CBloodPool_ARRAY_01d4a944[1].position.z
;   ... and 3 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ceef0
        ;   Label: core_gore.cpp_CGore_findBloodTypeAtPosition_FUN_004ceef0
    PUSH ESI                            ; 004ceef1
    PUSH EDI                            ; 004ceef2
    PUSH EBP                            ; 004ceef3
    MOV EBP,ESP                         ; 004ceef4
    AND ESP,0xfffffff8                  ; 004ceef6
    MOV ECX,dword ptr [EBP + 0x18]      ; 004ceef9
    MOV EDX,dword ptr [0x01d4a940]      ; 004ceefc | g_INT_01d4a940
    XOR EBX,EBX                         ; 004cef02
    TEST EDX,EDX                        ; 004cef04
    JLE 0x004cef30                      ; 004cef06
        ;   XREF to: 004cef30 (CONDITIONAL_JUMP)  ; LAB_004cef30
    MOV ESI,dword ptr [0x01d5ba14]      ; 004cef08 | g_INT_01d5ba14
    MOV EDX,0x1d4a944                   ; 004cef0e
    MOV ESI,dword ptr [ESI*0x4 + 0x1d5ba04] ; 004cef13
    MOV EDI,dword ptr [ESI + 0x2c]      ; 004cef1a
        ;   Label: LAB_004cef1a
    CMP EDI,dword ptr [EDX + 0x14]      ; 004cef1d | g_CBloodPool_ARRAY_01d4a944[0].area_id | g_CBloodPool_ARRAY_01d4a944[1].area_id
    JZ 0x004cef65                       ; 004cef20
        ;   XREF to: 004cef65 (CONDITIONAL_JUMP)  ; LAB_004cef65
    MOV EDI,dword ptr [0x01d4a940]      ; 004cef22 | g_INT_01d4a940
        ;   Label: LAB_004cef22
    INC EBX                             ; 004cef28
    ADD EDX,0x2c                        ; 004cef29
    CMP EBX,EDI                         ; 004cef2c
    JL 0x004cef1a                       ; 004cef2e
        ;   XREF to: 004cef1a (CONDITIONAL_JUMP)  ; LAB_004cef1a
    MOV EAX,[0x01d276b8]                ; 004cef30 | g_INT_01d276b8
        ;   Label: LAB_004cef30
    XOR EBX,EBX                         ; 004cef35
    TEST EAX,EAX                        ; 004cef37
    JLE 0x004cef5c                      ; 004cef39
        ;   XREF to: 004cef5c (CONDITIONAL_JUMP)  ; LAB_004cef5c
    MOV EDI,dword ptr [0x01d5ba14]      ; 004cef3b | g_INT_01d5ba14
    MOV EDX,0x1d276bc                   ; 004cef41
    SHL EDI,0x2                         ; 004cef46
    CMP dword ptr [EDX + 0x14],0x0      ; 004cef49 | g_CBloodSplat_ARRAY_01d276bc[0].is_wall_splat | g_CBloodSplat_ARRAY_01d276bc[1].is_wall_splat
        ;   Label: LAB_004cef49
    JZ 0x004cefac                       ; 004cef4d
        ;   XREF to: 004cefac (CONDITIONAL_JUMP)  ; LAB_004cefac
    MOV EAX,[0x01d276b8]                ; 004cef4f | g_INT_01d276b8
        ;   Label: LAB_004cef4f
    INC EBX                             ; 004cef54
    ADD EDX,0x48                        ; 004cef55
    CMP EBX,EAX                         ; 004cef58
    JL 0x004cef49                       ; 004cef5a
        ;   XREF to: 004cef49 (CONDITIONAL_JUMP)  ; LAB_004cef49
    XOR EAX,EAX                         ; 004cef5c
        ;   Label: LAB_004cef5c
    MOV ESP,EBP                         ; 004cef5e
        ;   Label: LAB_004cef5e
    POP EBP                             ; 004cef60
    POP EDI                             ; 004cef61
    POP ESI                             ; 004cef62
    POP EBX                             ; 004cef63
    RET                                 ; 004cef64
    FLD float ptr [ECX + 0x4]           ; 004cef65
        ;   Label: LAB_004cef65
    FSUB float ptr [EDX + 0x8]          ; 004cef68 | g_CBloodPool_ARRAY_01d4a944[1].position.y
    FABS                                ; 004cef6b
    FCOMP double ptr [0x005c4781]       ; 004cef6d | g_DOUBLE_005c4781
    FNSTSW AX                           ; 004cef73
    SAHF                                ; 004cef75
    JA 0x004cef22                       ; 004cef76
        ;   XREF to: 004cef22 (CONDITIONAL_JUMP)  ; LAB_004cef22
    FLD float ptr [ECX]                 ; 004cef78
    FSUB float ptr [EDX + 0x4]          ; 004cef7a | g_CBloodPool_ARRAY_01d4a944[1].position.x
    FABS                                ; 004cef7d
    FCOMP double ptr [0x005c4789]       ; 004cef7f | g_DOUBLE_005c4789
    FNSTSW AX                           ; 004cef85
    SAHF                                ; 004cef87
    JA 0x004cef22                       ; 004cef88
        ;   XREF to: 004cef22 (CONDITIONAL_JUMP)  ; LAB_004cef22
    FLD float ptr [ECX + 0x8]           ; 004cef8a
    FSUB float ptr [EDX + 0xc]          ; 004cef8d | g_CBloodPool_ARRAY_01d4a944[1].position.z
    FABS                                ; 004cef90
    FCOMP double ptr [0x005c4789]       ; 004cef92 | g_DOUBLE_005c4789
    FNSTSW AX                           ; 004cef98
    SAHF                                ; 004cef9a
    JA 0x004cef22                       ; 004cef9b
        ;   XREF to: 004cef22 (CONDITIONAL_JUMP)  ; LAB_004cef22
    MOV EAX,dword ptr [EDX + 0x10]      ; 004cef9d | g_CBloodPool_ARRAY_01d4a944[1].blood_type
    MOV EDX,dword ptr [EBP + 0x1c]      ; 004cefa0
    MOV dword ptr [EDX],EAX             ; 004cefa3
    MOV EAX,0x1                         ; 004cefa5
    JMP 0x004cef5e                      ; 004cefaa
        ;   XREF to: 004cef5e (UNCONDITIONAL_JUMP)  ; LAB_004cef5e
    MOV ESI,dword ptr [EDI + 0x1d5ba04] ; 004cefac
        ;   Label: LAB_004cefac
    MOV EAX,dword ptr [EDX + 0x10]      ; 004cefb2 | g_CBloodSplat_ARRAY_01d276bc[1].area_id
    CMP EAX,dword ptr [ESI + 0x2c]      ; 004cefb5
    JNZ 0x004cef4f                      ; 004cefb8
        ;   XREF to: 004cef4f (CONDITIONAL_JUMP)  ; LAB_004cef4f
    FLD float ptr [ECX + 0x4]           ; 004cefba
    FSUB float ptr [EDX + 0x8]          ; 004cefbd | g_CBloodSplat_ARRAY_01d276bc[1].position.y
    FABS                                ; 004cefc0
    FCOMP double ptr [0x005c4781]       ; 004cefc2 | g_DOUBLE_005c4781
    FNSTSW AX                           ; 004cefc8
    SAHF                                ; 004cefca
    JA 0x004cef4f                       ; 004cefcb
        ;   XREF to: 004cef4f (CONDITIONAL_JUMP)  ; LAB_004cef4f
    FLD float ptr [ECX]                 ; 004cefcd
    FSUB float ptr [EDX + 0x4]          ; 004cefcf | g_CBloodSplat_ARRAY_01d276bc[1].position.x
    FABS                                ; 004cefd2
    FCOMP double ptr [0x005c4781]       ; 004cefd4 | g_DOUBLE_005c4781
    FNSTSW AX                           ; 004cefda
    SAHF                                ; 004cefdc
    JA 0x004cef4f                       ; 004cefdd
        ;   XREF to: 004cef4f (CONDITIONAL_JUMP)  ; LAB_004cef4f
    FLD float ptr [ECX + 0x8]           ; 004cefe3
    FSUB float ptr [EDX + 0xc]          ; 004cefe6 | g_CBloodSplat_ARRAY_01d276bc[1].position.z
    FABS                                ; 004cefe9
    FCOMP double ptr [0x005c4781]       ; 004cefeb | g_DOUBLE_005c4781
    FNSTSW AX                           ; 004ceff1
    SAHF                                ; 004ceff3
    JA 0x004cef4f                       ; 004ceff4
        ;   XREF to: 004cef4f (CONDITIONAL_JUMP)  ; LAB_004cef4f
    MOV EAX,dword ptr [EDX + 0x18]      ; 004ceffa | g_CBloodSplat_ARRAY_01d276bc[1].blood_type
    MOV EDX,dword ptr [EBP + 0x1c]      ; 004ceffd
    MOV dword ptr [EDX],EAX             ; 004cf000
    MOV EAX,0x1                         ; 004cf002
    MOV ESP,EBP                         ; 004cf007
    POP EBP                             ; 004cf009
    POP EDI                             ; 004cf00a
    POP ESI                             ; 004cf00b
    POP EBX                             ; 004cf00c
    RET                                 ; 004cf00d

