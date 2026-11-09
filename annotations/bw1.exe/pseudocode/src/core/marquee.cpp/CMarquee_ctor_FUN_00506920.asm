; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMarquee * __cdecl core_marquee_cpp_CMarquee_ctor_FUN_00506920(CMarquee *this_ptr)
;
; Parameters:
; CMarquee *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_marquee.cpp_factoryFuncMarquee_FUN_005068f0 at 00506903
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_004085c0
;   core_course.cpp_CCourse_ctor_FUN_00447d10
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00506920
        ;   Label: core_marquee.cpp_CMarquee_ctor_FUN_00506920
    PUSH EDI                            ; 00506921
    MOV EDX,dword ptr [ESP + 0xc]       ; 00506922
    PUSH EDX                            ; 00506926
    CALL core_actor.cpp_CDemonActor_ctor_FUN_004085c0 ; 00506927
        ;   XREF to: 004085c0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_004085c0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0050692c
    ADD EAX,0x1a4                       ; 0050692f
    PUSH EAX                            ; 00506934
    CALL core_course.cpp_CCourse_ctor_FUN_00447d10 ; 00506935
        ;   XREF to: 00447d10 (UNCONDITIONAL_CALL)  ; CCourse * core_course.cpp_CCourse_ctor_FUN_00447d10(CCourse * this_ptr)
    LEA EDX,[EAX + 0xfffffe5c]          ; 0050693a
    MOV ESI,0x5e769e                    ; 00506940
    ADD ESP,0x4                         ; 00506945
    MOV dword ptr [EDX + 0x154],0x6036d4 ; 00506948
    LEA EDI,[EDX + 0x158]               ; 00506952
    MOV dword ptr [EDX + 0x178],0x41200000 ; 00506958
    PUSH EDI                            ; 00506962
    MOV AL,byte ptr [ESI]               ; 00506963
        ;   Label: LAB_00506963
    MOV byte ptr [EDI],AL               ; 00506965
    CMP AL,0x0                          ; 00506967
    JZ 0x0050697b                       ; 00506969
        ;   XREF to: 0050697b (CONDITIONAL_JUMP)  ; LAB_0050697b
    MOV AL,byte ptr [ESI + 0x1]         ; 0050696b
    ADD ESI,0x2                         ; 0050696e
    MOV byte ptr [EDI + 0x1],AL         ; 00506971
    ADD EDI,0x2                         ; 00506974
    CMP AL,0x0                          ; 00506977
    JNZ 0x00506963                      ; 00506979
        ;   XREF to: 00506963 (CONDITIONAL_JUMP)  ; LAB_00506963
    POP EDI                             ; 0050697b
        ;   Label: LAB_0050697b
    MOV dword ptr [EDX + 0x17c],0x0     ; 0050697c
    MOV dword ptr [EDX + 0x180],0x3     ; 00506986
    MOV dword ptr [EDX + 0x184],0x0     ; 00506990
    MOV dword ptr [EDX + 0x188],0x0     ; 0050699a
    MOV dword ptr [EDX + 0x18c],0x0     ; 005069a4
    MOV dword ptr [EDX + 0x190],0x0     ; 005069ae
    MOV dword ptr [EDX + 0x194],0x0     ; 005069b8
    MOV dword ptr [EDX + 0x198],0x0     ; 005069c2
    MOV dword ptr [EDX + 0xfc],0x1      ; 005069cc
    MOV EAX,EDX                         ; 005069d6
    MOV dword ptr [EDX + 0x1a0],0x1     ; 005069d8
    POP EDI                             ; 005069e2
    POP ESI                             ; 005069e3
    RET                                 ; 005069e4

