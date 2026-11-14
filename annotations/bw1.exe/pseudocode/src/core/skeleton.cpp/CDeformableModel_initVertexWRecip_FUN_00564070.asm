; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModel_initVertexWRecip_FUN_00564070(CDeformableModel *this_ptr,int lod_index,CVector3i *lod_vertices)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   lod_index
; CVector3i *      Stack[0xc]:4   lod_vertices
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_skinAndInitWRecip_FUN_005699c0 at 005699ea
;
; Referenced Globals:
;   undefined4 DAT_00612560
;   undefined4 DAT_01bc120c
;   undefined4 DAT_01c51cac
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00564070
        ;   Label: core_skeleton.cpp_CDeformableModel_initVertexWRecip_FUN_00564070
    PUSH ESI                            ; 00564071
    PUSH EDI                            ; 00564072
    PUSH EBP                            ; 00564073
    MOV EDI,dword ptr [0x00612560]      ; 00564074 | DAT_00612560
    MOV EBP,dword ptr [0x01c51cac]      ; 0056407a | DAT_01c51cac
    MOV ESI,dword ptr [ESP + 0x18]      ; 00564080
    MOV ECX,dword ptr [ESP + 0x14]      ; 00564084
    SHL ESI,0x2                         ; 00564088
    ADD ESI,ECX                         ; 0056408b
    XOR EAX,EAX                         ; 0056408d
    MOV EBX,dword ptr [ESI + 0x2c]      ; 0056408f
    XOR EDX,EDX                         ; 00564092
    TEST EBX,EBX                        ; 00564094
    JLE 0x005640b0                      ; 00564096
        ;   XREF to: 005640b0 (CONDITIONAL_JUMP)  ; LAB_005640b0
    MOV ECX,dword ptr [EDI]             ; 00564098 | DAT_01bc120c
        ;   Label: LAB_00564098
    MOV dword ptr [ECX + EAX*0x1 + 0x2c],EBP ; 0056409a
    INC EDX                             ; 0056409e
    MOV ECX,dword ptr [ESI + 0x2c]      ; 0056409f
    ADD EAX,0x30                        ; 005640a2
    CMP EDX,ECX                         ; 005640a5
    JL 0x00564098                       ; 005640a7
        ;   XREF to: 00564098 (CONDITIONAL_JUMP)  ; LAB_00564098
    LEA EAX,[EAX]                       ; 005640a9
    NOP                                 ; 005640af
    MOV dword ptr [0x01c51cac],EBP      ; 005640b0 | DAT_01c51cac
        ;   Label: LAB_005640b0
    MOV dword ptr [0x00612560],EDI      ; 005640b6 | DAT_00612560
    POP EBP                             ; 005640bc
    POP EDI                             ; 005640bd
    POP ESI                             ; 005640be
    POP EBX                             ; 005640bf
    RET                                 ; 005640c0

