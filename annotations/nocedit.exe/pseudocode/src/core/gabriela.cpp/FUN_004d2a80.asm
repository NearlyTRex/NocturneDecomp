; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl float __cdecl core_gabriela_cpp_FUN_004d2a80 (int current_bone_index,int target_bone_index,float blend_weight,int hierarchy_distance, CDeformableModelInstance *model_ptr)
;
; Parameters:
; int              Stack[0x4]:4   current_bone_index
; int              Stack[0x8]:4   target_bone_index
; float            Stack[0xc]:4   blend_weight
; int              Stack[0x10]:4   hierarchy_distance
; CDeformableModelInstance * Stack[0x14]:4   model_ptr
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   core_gabriela.cpp_CGabriella_FUN_004d4d80 at 004d5462
;
; Referenced Globals:
;   double DOUBLE_0062ac95 = 0.800000000000000
;   double DOUBLE_0062ac9d = 0.600000000000000
;   double DOUBLE_0062aca5 = 0.400000000000000
;   double DOUBLE_0062acad = 0.200000000000000
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 004d2a80
        ;   Label: core_gabriela.cpp_FUN_004d2a80
    MOV EAX,dword ptr [ESP + 0x14]      ; 004d2a83
    TEST EAX,EAX                        ; 004d2a87
    JLE 0x004d2aae                      ; 004d2a89
        ;   XREF to: 004d2aae (CONDITIONAL_JUMP)  ; LAB_004d2aae
    CMP EAX,0x1                         ; 004d2a8b
    JZ 0x004d2aba                       ; 004d2a8e
        ;   XREF to: 004d2aba (CONDITIONAL_JUMP)  ; LAB_004d2aba
    CMP EAX,0x2                         ; 004d2a90
    JZ 0x004d2ac6                       ; 004d2a93
        ;   XREF to: 004d2ac6 (CONDITIONAL_JUMP)  ; LAB_004d2ac6
    CMP EAX,0x3                         ; 004d2a95
    JNZ 0x004d2ad2                      ; 004d2a98
        ;   XREF to: 004d2ad2 (CONDITIONAL_JUMP)  ; LAB_004d2ad2
    FLD float ptr [ESP + 0x10]          ; 004d2a9a
    FMUL double ptr [0x0062ac95]        ; 004d2a9e | DOUBLE_0062ac95
    FSTP float ptr [ESP]                ; 004d2aa4
        ;   Label: LAB_004d2aa4
    MOV EAX,dword ptr [ESP]             ; 004d2aa7
    ADD ESP,0x4                         ; 004d2aaa
    RET                                 ; 004d2aad
    FLD float ptr [ESP + 0x10]          ; 004d2aae
        ;   Label: LAB_004d2aae
    FMUL double ptr [0x0062acad]        ; 004d2ab2 | DOUBLE_0062acad
    JMP 0x004d2aa4                      ; 004d2ab8
        ;   XREF to: 004d2aa4 (UNCONDITIONAL_JUMP)  ; LAB_004d2aa4
    FLD float ptr [ESP + 0x10]          ; 004d2aba
        ;   Label: LAB_004d2aba
    FMUL double ptr [0x0062aca5]        ; 004d2abe | DOUBLE_0062aca5
    JMP 0x004d2aa4                      ; 004d2ac4
        ;   XREF to: 004d2aa4 (UNCONDITIONAL_JUMP)  ; LAB_004d2aa4
    FLD float ptr [ESP + 0x10]          ; 004d2ac6
        ;   Label: LAB_004d2ac6
    FMUL double ptr [0x0062ac9d]        ; 004d2aca | DOUBLE_0062ac9d
    JMP 0x004d2aa4                      ; 004d2ad0
        ;   XREF to: 004d2aa4 (UNCONDITIONAL_JUMP)  ; LAB_004d2aa4
    MOV EAX,dword ptr [ESP + 0x10]      ; 004d2ad2
        ;   Label: LAB_004d2ad2
    MOV dword ptr [ESP],EAX             ; 004d2ad6
    MOV EAX,dword ptr [ESP]             ; 004d2ad9
    ADD ESP,0x4                         ; 004d2adc
    RET                                 ; 004d2adf

