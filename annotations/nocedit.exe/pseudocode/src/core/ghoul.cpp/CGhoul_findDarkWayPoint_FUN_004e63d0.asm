; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_ghoul.cpp_CGhoul_findDarkWayPoint_FUN_004e63d0()
;
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_ghoul.cpp_CGhoul_FUN_004e6600 at 004e771d
;
; Called Functions:
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e63d0
        ;   Label: core_ghoul.cpp_CGhoul_findDarkWayPoint_FUN_004e63d0
    PUSH ESI                            ; 004e63d1
    PUSH EDI                            ; 004e63d2
    PUSH EBP                            ; 004e63d3
    SUB ESP,0x20                        ; 004e63d4
    MOV EBP,dword ptr [ESP + 0x34]      ; 004e63d7
    CMP dword ptr [EBP + 0xbf24],0x0    ; 004e63db
    JNZ 0x004e63fd                      ; 004e63e2
        ;   XREF to: 004e63fd (CONDITIONAL_JUMP)  ; LAB_004e63fd
    FLD float ptr [EBP + 0xbf20]        ; 004e63e4
    FSUB float ptr [ESP + 0x38]         ; 004e63ea
    FST float ptr [EBP + 0xbf20]        ; 004e63ee
    FLDZ                                ; 004e63f4
    FCOMPP                              ; 004e63f6
    FNSTSW AX                           ; 004e63f8
    SAHF                                ; 004e63fa
    JNC 0x004e6405                      ; 004e63fb
        ;   XREF to: 004e6405 (CONDITIONAL_JUMP)  ; LAB_004e6405
    ADD ESP,0x20                        ; 004e63fd
        ;   Label: LAB_004e63fd
    POP EBP                             ; 004e6400
    POP EDI                             ; 004e6401
    POP ESI                             ; 004e6402
    POP EBX                             ; 004e6403
    RET                                 ; 004e6404
    PUSH 0x40000000                     ; 004e6405
        ;   Label: LAB_004e6405
    PUSH 0x3f800000                     ; 004e640a
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 004e640f
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)

