; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_enemy_cpp_FUN_004a0770(CEnemy *this_ptr,CVector3f *point,float radius,SDamageInfo *damage_info)
;
; Parameters:
; CEnemy *         Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   point
; float            Stack[0xc]:4   radius
; SDamageInfo *    Stack[0x10]:4   damage_info
;
; XREF[21]:
;   core_batcreat.cpp_FUN_004115b0 at 00411a4a
;   core_batman.cpp_FUN_00412ba0 at 004134e2
;   core_boneguy.cpp_FUN_0041bb40 at 0041c2ef
;   core_bride.cpp_FUN_00423b70 at 004241c0
;   core_constrct.cpp_FUN_00445cb0 at 004468c4
;   core_cow.cpp_FUN_00448570 at 004488b7
;   core_dog.cpp_FUN_004768a0 at 00476c44
;   core_dracbrid.cpp_FUN_0047b510 at 0047c01f
;   core_drone.cpp_FUN_00485d70 at 00486155
;   core_gargoyle.cpp_FUN_004dc7e0 at 004dcc1b
;   ... and 11 more
;
; Referenced Globals:
;   undefined4 DAT_005dcb42
;   undefined4 DAT_005dcb4a
;   CGore* g_CGorePtr = 01cd0e3c
;
; Called Functions:
;   core_gore.cpp_FUN_004e6060
;   crt_math.c_round_FUN_005c03a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a0770
        ;   Label: core_enemy.cpp_FUN_004a0770
    PUSH ESI                            ; 004a0771
    PUSH EDI                            ; 004a0772
    PUSH EBP                            ; 004a0773
    MOV EBP,ESP                         ; 004a0774
    SUB ESP,0x18                        ; 004a0776
    AND ESP,0xfffffff8                  ; 004a0779
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a077c
    MOV ESI,dword ptr [EBP + 0x18]      ; 004a077f
    MOV EDX,dword ptr [EAX + 0xc1e8]    ; 004a0782
    TEST EDX,EDX                        ; 004a0788
    JNZ 0x004a0795                      ; 004a078a
        ;   XREF to: 004a0795 (CONDITIONAL_JUMP)  ; LAB_004a0795
    XOR EAX,EAX                         ; 004a078c
        ;   Label: LAB_004a078c
    MOV ESP,EBP                         ; 004a078e
    POP EBP                             ; 004a0790
    POP EDI                             ; 004a0791
    POP ESI                             ; 004a0792
    POP EBX                             ; 004a0793
    RET                                 ; 004a0794
    MOV ECX,dword ptr [EBP + 0x20]      ; 004a0795
        ;   Label: LAB_004a0795
    PUSH ECX                            ; 004a0798
    PUSH dword ptr [EBP + 0x1c]         ; 004a0799
    PUSH ESI                            ; 004a079c
    MOV EAX,EDX                         ; 004a079d
    MOV EDX,dword ptr [EDX + 0x154]     ; 004a079f
    PUSH EAX                            ; 004a07a5
    CALL dword ptr [EDX + 0x100]        ; 004a07a6
    ADD ESP,0x10                        ; 004a07ac
    MOV EAX,dword ptr [EBP + 0x20]      ; 004a07af
    FLDZ                                ; 004a07b2
    FLD float ptr [EAX + 0x4]           ; 004a07b4
    FSTP double ptr [ESP]               ; 004a07b7
    FCOMP double ptr [ESP]              ; 004a07ba
    FNSTSW AX                           ; 004a07bd
    SAHF                                ; 004a07bf
    JNC 0x004a078c                      ; 004a07c0
        ;   XREF to: 004a078c (CONDITIONAL_JUMP)  ; LAB_004a078c
    FLD double ptr [ESP]                ; 004a07c2
    FMUL double ptr [0x005dcb42]        ; 004a07c5 | DAT_005dcb42
    FMUL double ptr [0x005dcb4a]        ; 004a07cb | DAT_005dcb4a
    PUSH 0x0                            ; 004a07d1
    CALL crt_math.c_round_FUN_005c03a0  ; 004a07d3
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x18]        ; 004a07d8
    MOV EBX,dword ptr [ESP + 0x18]      ; 004a07dc
    PUSH EBX                            ; 004a07e0
    LEA EDI,[ESP + 0x10]                ; 004a07e1
    LEA EAX,[ESP + 0x10]                ; 004a07e5
    PUSH 0x0                            ; 004a07e9
    MOVSD ES:EDI,ESI                    ; 004a07eb
    MOVSD ES:EDI,ESI                    ; 004a07ec
    MOVSD ES:EDI,ESI                    ; 004a07ed
    PUSH EAX                            ; 004a07ee
    MOV ESI,dword ptr [0x0061dca4]      ; 004a07ef | g_CGorePtr
    PUSH ESI                            ; 004a07f5
    CALL core_gore.cpp_FUN_004e6060     ; 004a07f6
        ;   XREF to: 004e6060 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_FUN_004e6060(CGore * this_ptr, CVector3f * position, CVector3f * direction, int count, ...)
    MOV EAX,0x1                         ; 004a07fb
    ADD ESP,0x14                        ; 004a0800
    MOV ESP,EBP                         ; 004a0803
    POP EBP                             ; 004a0805
    POP EDI                             ; 004a0806
    POP ESI                             ; 004a0807
    POP EBX                             ; 004a0808
    RET                                 ; 004a0809

