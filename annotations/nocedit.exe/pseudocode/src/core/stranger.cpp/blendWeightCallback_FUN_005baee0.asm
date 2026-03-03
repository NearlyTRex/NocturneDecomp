; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_stranger_cpp_blendWeightCallback_FUN_005baee0(int bone,int target,float weight,int distance,CDeformableModelInstance *instance)
;
; Parameters:
; int              Stack[0x4]:4   bone
; int              Stack[0x8]:4   target
; float            Stack[0xc]:4   weight
; int              Stack[0x10]:4   distance
; CDeformableModelInstance * Stack[0x14]:4   instance
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   core_stranger.cpp_CStranger_makeDrawDecision_FUN_005bfb60 at 005bffec
;
; Referenced Globals:
;   double DOUBLE_0065319c = 0.700000000000000
;   double DOUBLE_006531a4 = 0.400000000000000
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 005baee0
        ;   Label: core_stranger.cpp_blendWeightCallback_FUN_005baee0
    MOV EAX,dword ptr [ESP + 0x14]      ; 005baee3
    TEST EAX,EAX                        ; 005baee7
    JLE 0x005baf04                      ; 005baee9
        ;   XREF to: 005baf04 (CONDITIONAL_JUMP)  ; LAB_005baf04
    CMP EAX,0x1                         ; 005baeeb
    JNZ 0x005baf10                      ; 005baeee
        ;   XREF to: 005baf10 (CONDITIONAL_JUMP)  ; LAB_005baf10
    FLD float ptr [ESP + 0x10]          ; 005baef0
    FMUL double ptr [0x0065319c]        ; 005baef4 | DOUBLE_0065319c
    FSTP float ptr [ESP]                ; 005baefa
        ;   Label: LAB_005baefa
    MOV EAX,dword ptr [ESP]             ; 005baefd
    ADD ESP,0x4                         ; 005baf00
    RET                                 ; 005baf03
    FLD float ptr [ESP + 0x10]          ; 005baf04
        ;   Label: LAB_005baf04
    FMUL double ptr [0x006531a4]        ; 005baf08 | DOUBLE_006531a4
    JMP 0x005baefa                      ; 005baf0e
        ;   XREF to: 005baefa (UNCONDITIONAL_JUMP)  ; LAB_005baefa
    MOV EAX,dword ptr [ESP + 0x10]      ; 005baf10
        ;   Label: LAB_005baf10
    MOV dword ptr [ESP],EAX             ; 005baf14
    MOV EAX,dword ptr [ESP]             ; 005baf17
    ADD ESP,0x4                         ; 005baf1a
    RET                                 ; 005baf1d

