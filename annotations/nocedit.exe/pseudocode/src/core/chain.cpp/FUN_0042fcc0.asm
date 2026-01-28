; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown CVector3f * core_chain_cpp_FUN_0042fcc0(void)
;
; Local Variables:
; undefined1       Stack[-0x14]:1  local_14
;
; XREF[1]:
;   core_chain.cpp_FUN_004300d0 at 004301d7
;
; Referenced Globals:
;   CVector3f g_ZeroVector
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_xform.cpp_transformVector3x4_FUN_005f4dc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042fcc0
        ;   Label: core_chain.cpp_FUN_0042fcc0
    PUSH ESI                            ; 0042fcc1
    SUB ESP,0xc                         ; 0042fcc2
    MOV ESI,dword ptr [ESP + 0x18]      ; 0042fcc5
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0042fcc9
    MOV EDX,dword ptr [ESI + 0x168]     ; 0042fccd
    LEA EAX,[EDX*0x4 + 0x0]             ; 0042fcd3
    SUB EAX,EDX                         ; 0042fcda
    MOV ECX,dword ptr [ESI + 0x164]     ; 0042fcdc
    SHL EAX,0x4                         ; 0042fce2
    LEA EDX,[ECX + 0xfd8]               ; 0042fce5
    ADD EAX,EDX                         ; 0042fceb
    PUSH EAX                            ; 0042fced
    PUSH 0x3f87558                      ; 0042fcee | g_ZeroVector
    LEA EAX,[ESP + 0x8]                 ; 0042fcf3
    PUSH EAX                            ; 0042fcf7
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 0042fcf8
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 0042fcfd
    PUSH EAX                            ; 0042fd00
    PUSH EBX                            ; 0042fd01
    MOV EDX,dword ptr [ESI + 0x164]     ; 0042fd02
    PUSH EDX                            ; 0042fd08
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 0042fd09
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 0042fd0e
    MOV EAX,EBX                         ; 0042fd11
    ADD ESP,0xc                         ; 0042fd13
    POP ESI                             ; 0042fd16
    POP EBX                             ; 0042fd17
    RET                                 ; 0042fd18

