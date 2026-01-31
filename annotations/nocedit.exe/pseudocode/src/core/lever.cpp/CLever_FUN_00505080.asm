; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_lever_cpp_CLever_FUN_00505080(CLever *this_ptr)
;
; Parameters:
; CLever *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x20]:1  local_20
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_hero.cpp_CHero_FUN_004f2f50 at 004f3055
;
; Called Functions:
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00505080
        ;   Label: core_lever.cpp_CLever_FUN_00505080
    PUSH ESI                            ; 00505081
    PUSH EDI                            ; 00505082
    PUSH EBP                            ; 00505083
    MOV EBP,ESP                         ; 00505084
    SUB ESP,0xc                         ; 00505086
    AND ESP,0xfffffff8                  ; 00505089
    MOV EBX,dword ptr [EBP + 0x14]      ; 0050508c
    CMP dword ptr [EBX + 0x80c],0x2     ; 0050508f
    JNZ 0x005050a4                      ; 00505096
        ;   XREF to: 005050a4 (CONDITIONAL_JUMP)  ; LAB_005050a4
    MOV EAX,0x1                         ; 00505098
        ;   Label: LAB_00505098
    MOV ESP,EBP                         ; 0050509d
    POP EBP                             ; 0050509f
    POP EDI                             ; 005050a0
    POP ESI                             ; 005050a1
    POP EBX                             ; 005050a2
    RET                                 ; 005050a3
    MOV ECX,dword ptr [EBP + 0x18]      ; 005050a4
        ;   Label: LAB_005050a4
    PUSH ECX                            ; 005050a7
    LEA EAX,[ESP + 0x4]                 ; 005050a8
    PUSH EAX                            ; 005050ac
    PUSH EBX                            ; 005050ad
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 005050ae
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    MOV ESI,dword ptr [EBX + 0x80c]     ; 005050b3
    ADD ESP,0xc                         ; 005050b9
    TEST ESI,ESI                        ; 005050bc
    JNZ 0x005050cd                      ; 005050be
        ;   XREF to: 005050cd (CONDITIONAL_JUMP)  ; LAB_005050cd
    FLD float ptr [ESP + 0x8]           ; 005050c0
    FLDZ                                ; 005050c4
    FCOMPP                              ; 005050c6
    FNSTSW AX                           ; 005050c8
    SAHF                                ; 005050ca
    JC 0x00505098                       ; 005050cb
        ;   XREF to: 00505098 (CONDITIONAL_JUMP)  ; LAB_00505098
    MOV EDI,dword ptr [EBX + 0x80c]     ; 005050cd
        ;   Label: LAB_005050cd
    CMP EDI,0x1                         ; 005050d3
    JNZ 0x005050ee                      ; 005050d6
        ;   XREF to: 005050ee (CONDITIONAL_JUMP)  ; LAB_005050ee
    FLD float ptr [ESP + 0x8]           ; 005050d8
    FLDZ                                ; 005050dc
    FCOMPP                              ; 005050de
    FNSTSW AX                           ; 005050e0
    SAHF                                ; 005050e2
    JBE 0x005050ee                      ; 005050e3
        ;   XREF to: 005050ee (CONDITIONAL_JUMP)  ; LAB_005050ee
    MOV EAX,EDI                         ; 005050e5
    MOV ESP,EBP                         ; 005050e7
    POP EBP                             ; 005050e9
    POP EDI                             ; 005050ea
    POP ESI                             ; 005050eb
    POP EBX                             ; 005050ec
    RET                                 ; 005050ed
    XOR EAX,EAX                         ; 005050ee
        ;   Label: LAB_005050ee
    MOV ESP,EBP                         ; 005050f0
    POP EBP                             ; 005050f2
    POP EDI                             ; 005050f3
    POP ESI                             ; 005050f4
    POP EBX                             ; 005050f5
    RET                                 ; 005050f6

