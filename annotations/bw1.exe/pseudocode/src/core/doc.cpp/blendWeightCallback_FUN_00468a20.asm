; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_doc_cpp_blendWeightCallback_FUN_00468a20(int bone,int target,float weight,int distance,CDeformableModelInstance *instance)
;
; Parameters:
; int              Stack[0x4]:4   bone
; int              Stack[0x8]:4   target
; float            Stack[0xc]:4   weight
; int              Stack[0x10]:4   distance
; CDeformableModelInstance * Stack[0x14]:4   instance
;
; XREF[1]:
;   core_doc.cpp_CDoc_makeDrawDecision_FUN_0046ea80 at 0046ef83
;
; Referenced Globals:
;   double g_DOUBLE_005d988c = 0.700000000000000
;   double g_DOUBLE_005d9894 = 0.800000000000000
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 00468a20
        ;   Label: core_doc.cpp_blendWeightCallback_FUN_00468a20
    MOV EAX,dword ptr [ESP + 0x14]      ; 00468a23
    TEST EAX,EAX                        ; 00468a27
    JLE 0x00468a44                      ; 00468a29
        ;   XREF to: 00468a44 (CONDITIONAL_JUMP)  ; LAB_00468a44
    CMP EAX,0x1                         ; 00468a2b
    JNZ 0x00468a50                      ; 00468a2e
        ;   XREF to: 00468a50 (CONDITIONAL_JUMP)  ; LAB_00468a50
    FLD float ptr [ESP + 0x10]          ; 00468a30
    FMUL double ptr [0x005d988c]        ; 00468a34 | g_DOUBLE_005d988c
    FSTP float ptr [ESP]                ; 00468a3a
        ;   Label: LAB_00468a3a
    MOV EAX,dword ptr [ESP]             ; 00468a3d
    ADD ESP,0x4                         ; 00468a40
    RET                                 ; 00468a43
    FLD float ptr [ESP + 0x10]          ; 00468a44
        ;   Label: LAB_00468a44
    FMUL double ptr [0x005d9894]        ; 00468a48 | g_DOUBLE_005d9894
    JMP 0x00468a3a                      ; 00468a4e
        ;   XREF to: 00468a3a (UNCONDITIONAL_JUMP)  ; LAB_00468a3a
    MOV EAX,dword ptr [ESP + 0x10]      ; 00468a50
        ;   Label: LAB_00468a50
    MOV dword ptr [ESP],EAX             ; 00468a54
    MOV EAX,dword ptr [ESP]             ; 00468a57
    ADD ESP,0x4                         ; 00468a5a
    RET                                 ; 00468a5d

