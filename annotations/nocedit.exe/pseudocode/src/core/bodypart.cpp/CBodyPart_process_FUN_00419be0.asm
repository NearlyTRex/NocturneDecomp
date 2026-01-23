; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_bodypart.cpp_CBodyPart_process_FUN_00419be0(CBodyPart * this_ptr, float delta_time)
;
; Parameters:
; CBodyPart *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined1       Stack[-0x54]:1  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; Referenced Globals:
;   TerminatedCString s_disableBodyPartDamage_00615def
;   double DOUBLE_00615e0c = 3
;   CEventList* g_CEventListPtr = 02d05310
;   CEventList g_CEventListInstance
;   CVector3f g_ZeroVector
;   undefined4 g_ZeroVector.y
;   undefined4 g_ZeroVector.z
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;   core_bodypart.cpp_CBodyPart_setCounts_FUN_004191d0
;   core_bodypart.cpp_FUN_00419e10
;   core_bodypart.cpp_FUN_0041b1b0
;   core_box.cpp_CBox_process_FUN_0041e2f0
;   core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
;   core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00419be0
        ;   Label: core_bodypart.cpp_CBodyPart_process_FUN_00419be0
    PUSH ESI                            ; 00419be1
    SUB ESP,0x4c                        ; 00419be2
    MOV EBX,dword ptr [ESP + 0x58]      ; 00419be5
    CMP dword ptr [EBX + 0x174],0x3     ; 00419be9
    JL 0x00419c73                       ; 00419bf0
        ;   XREF to: 00419c73 (CONDITIONAL_JUMP)  ; LAB_00419c73
    CMP dword ptr [EBX + 0x180],0x1     ; 00419bf6
    JL 0x00419c73                       ; 00419bfd
        ;   XREF to: 00419c73 (CONDITIONAL_JUMP)  ; LAB_00419c73
    CMP dword ptr [EBX + 0x158],0x0     ; 00419bff
    JZ 0x00419c15                       ; 00419c06
        ;   XREF to: 00419c15 (CONDITIONAL_JUMP)  ; LAB_00419c15
    CMP dword ptr [EBX + 0xf20],0x0     ; 00419c08
    JZ 0x00419cd0                       ; 00419c0f
        ;   XREF to: 00419cd0 (CONDITIONAL_JUMP)  ; LAB_00419cd0
    CMP dword ptr [EBX + 0xf28],0x0     ; 00419c15
        ;   Label: LAB_00419c15
    JZ 0x00419ce3                       ; 00419c1c
        ;   XREF to: 00419ce3 (CONDITIONAL_JUMP)  ; LAB_00419ce3
    PUSH EBX                            ; 00419c22
        ;   Label: LAB_00419c22
    CALL core_bodypart.cpp_FUN_0041b1b0 ; 00419c23
        ;   XREF to: 0041b1b0 (UNCONDITIONAL_CALL)  ; undefined core_bodypart.cpp_FUN_0041b1b0()
    ADD ESP,0x4                         ; 00419c28
    PUSH EDI                            ; 00419c2b
        ;   Label: LAB_00419c2b
    MOV EDX,dword ptr [EBX + 0xf28]     ; 00419c2c
    TEST EDX,EDX                        ; 00419c32
    JNZ 0x00419c5f                      ; 00419c34
        ;   XREF to: 00419c5f (CONDITIONAL_JUMP)  ; LAB_00419c5f
    FLD float ptr [EBX + 0xcbc]         ; 00419c36
    FSUB float ptr [ESP + 0x60]         ; 00419c3c
    FST float ptr [EBX + 0xcbc]         ; 00419c40
    FLDZ                                ; 00419c46
    FCOMPP                              ; 00419c48
    FNSTSW AX                           ; 00419c4a
    SAHF                                ; 00419c4c
    JBE 0x00419cf5                      ; 00419c4d
        ;   XREF to: 00419cf5 (CONDITIONAL_JUMP)  ; LAB_00419cf5
    MOV dword ptr [EBX + 0xf20],EDX     ; 00419c53
    MOV dword ptr [EBX + 0xcbc],EDX     ; 00419c59
    PUSH dword ptr [ESP + 0x60]         ; 00419c5f
        ;   Label: LAB_00419c5f
    PUSH EBX                            ; 00419c63
    CALL core_bodypart.cpp_FUN_00419e10 ; 00419c64
        ;   XREF to: 00419e10 (UNCONDITIONAL_CALL)  ; undefined core_bodypart.cpp_FUN_00419e10()
    ADD ESP,0x8                         ; 00419c69
    POP EDI                             ; 00419c6c
    ADD ESP,0x4c                        ; 00419c6d
        ;   Label: LAB_00419c6d
    POP ESI                             ; 00419c70
    POP EBX                             ; 00419c71
    RET                                 ; 00419c72
    PUSH 0x0                            ; 00419c73
        ;   Label: LAB_00419c73
    PUSH 0x0                            ; 00419c75
    PUSH EBX                            ; 00419c77
    MOV dword ptr [EBX + 0x70],0x2      ; 00419c78
    CALL core_bodypart.cpp_CBodyPart_setCounts_FUN_004191d0 ; 00419c7f
        ;   XREF to: 004191d0 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_setCounts_FUN_004191d0(CBodyPart * this_ptr)
    LEA EAX,[EBX + 0x168]               ; 00419c84
    ADD ESP,0xc                         ; 00419c8a
    MOV ESI,EAX                         ; 00419c8d
    CMP EAX,0x3f87558                   ; 00419c8f | g_ZeroVector
    JZ 0x00419cb0                       ; 00419c94
        ;   XREF to: 00419cb0 (CONDITIONAL_JUMP)  ; LAB_00419cb0
    MOV EDX,dword ptr [0x03f87558]      ; 00419c96 | g_ZeroVector
    MOV dword ptr [EAX],EDX             ; 00419c9c
    MOV EDX,dword ptr [0x03f8755c]      ; 00419c9e | g_ZeroVector.y
    MOV dword ptr [EAX + 0x4],EDX       ; 00419ca4
    MOV EDX,dword ptr [0x03f87560]      ; 00419ca7 | g_ZeroVector.z
    MOV dword ptr [EAX + 0x8],EDX       ; 00419cad
    ADD EBX,0x15c                       ; 00419cb0
        ;   Label: LAB_00419cb0
    CMP EBX,ESI                         ; 00419cb6
    JZ 0x00419c6d                       ; 00419cb8
        ;   XREF to: 00419c6d (CONDITIONAL_JUMP)  ; LAB_00419c6d
    MOV EAX,dword ptr [ESI]             ; 00419cba
    MOV dword ptr [EBX],EAX             ; 00419cbc
    MOV EAX,dword ptr [ESI + 0x4]       ; 00419cbe
    MOV dword ptr [EBX + 0x4],EAX       ; 00419cc1
    MOV EAX,dword ptr [ESI + 0x8]       ; 00419cc4
    MOV dword ptr [EBX + 0x8],EAX       ; 00419cc7
    ADD ESP,0x4c                        ; 00419cca
    POP ESI                             ; 00419ccd
    POP EBX                             ; 00419cce
    RET                                 ; 00419ccf
    PUSH dword ptr [ESP + 0x5c]         ; 00419cd0
        ;   Label: LAB_00419cd0
    PUSH EBX                            ; 00419cd4
    CALL core_bodypart.cpp_FUN_00419e10 ; 00419cd5
        ;   XREF to: 00419e10 (UNCONDITIONAL_CALL)  ; undefined core_bodypart.cpp_FUN_00419e10()
    ADD ESP,0x8                         ; 00419cda
    ADD ESP,0x4c                        ; 00419cdd
    POP ESI                             ; 00419ce0
    POP EBX                             ; 00419ce1
    RET                                 ; 00419ce2
    CMP dword ptr [EBX + 0xf20],0x0     ; 00419ce3
        ;   Label: LAB_00419ce3
    JNZ 0x00419c22                      ; 00419cea
        ;   XREF to: 00419c22 (CONDITIONAL_JUMP)  ; LAB_00419c22
    JMP 0x00419c2b                      ; 00419cf0
        ;   XREF to: 00419c2b (UNCONDITIONAL_JUMP)  ; LAB_00419c2b
    LEA ESI,[EBX + 0x20]                ; 00419cf5
        ;   Label: LAB_00419cf5
    MOV EAX,dword ptr [ESI]             ; 00419cf8
    MOV dword ptr [ESP + 0x40],EAX      ; 00419cfa
    LEA EAX,[ESI + 0x4]                 ; 00419cfe
    MOV EAX,dword ptr [EAX]             ; 00419d01
    MOV dword ptr [ESP + 0x44],EAX      ; 00419d03
    LEA EAX,[ESI + 0x8]                 ; 00419d07
    PUSH dword ptr [ESP + 0x60]         ; 00419d0a
    LEA EDI,[EBX + 0xccc]               ; 00419d0e
    MOV EAX,dword ptr [EAX]             ; 00419d14
    PUSH EDI                            ; 00419d16
    MOV dword ptr [ESP + 0x50],EAX      ; 00419d17
    CALL core_box.cpp_CBox_process_FUN_0041e2f0 ; 00419d1b
        ;   XREF to: 0041e2f0 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBox_process_FUN_0041e2f0(CBox * this_ptr, float delta_time)
    MOV EAX,dword ptr [EDI]             ; 00419d20
    MOV dword ptr [ESI],EAX             ; 00419d22
    MOV EAX,dword ptr [EDI + 0x4]       ; 00419d24
    MOV dword ptr [ESI + 0x4],EAX       ; 00419d27
    MOV EAX,dword ptr [EDI + 0x8]       ; 00419d2a
    MOV dword ptr [ESI + 0x8],EAX       ; 00419d2d
    LEA ESI,[EBX + 0x30]                ; 00419d30
    LEA EAX,[EBX + 0xcd8]               ; 00419d33
    ADD ESP,0x8                         ; 00419d39
    CMP ESI,EAX                         ; 00419d3c
    JZ 0x00419d50                       ; 00419d3e
        ;   XREF to: 00419d50 (CONDITIONAL_JUMP)  ; LAB_00419d50
    MOV EDX,dword ptr [EAX]             ; 00419d40
    MOV dword ptr [ESI],EDX             ; 00419d42
    MOV EDX,dword ptr [EAX + 0x4]       ; 00419d44
    MOV dword ptr [ESI + 0x4],EDX       ; 00419d47
    MOV EDX,dword ptr [EAX + 0x8]       ; 00419d4a
    MOV dword ptr [ESI + 0x8],EDX       ; 00419d4d
    PUSH EBX                            ; 00419d50
        ;   Label: LAB_00419d50
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10 ; 00419d51
        ;   XREF to: 00408c10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(CDemonActor * this_ptr)
    LEA EAX,[EBX + 0xd0c]               ; 00419d56
    FLD float ptr [EAX + 0x4]           ; 00419d5c
    FMUL ST0                            ; 00419d5f
    FLD float ptr [EAX]                 ; 00419d61
    FMUL ST0                            ; 00419d63
    FADDP                               ; 00419d65
    FLD float ptr [EAX + 0x8]           ; 00419d67
    FMUL ST0                            ; 00419d6a
    FADDP                               ; 00419d6c
    FSQRT                               ; 00419d6e
    ADD ESP,0x4                         ; 00419d70
    FCOMP double ptr [0x00615e0c]       ; 00419d73 | DOUBLE_00615e0c
    FNSTSW AX                           ; 00419d79
    SAHF                                ; 00419d7b
    JBE 0x00419c5f                      ; 00419d7c
        ;   XREF to: 00419c5f (CONDITIONAL_JUMP)  ; LAB_00419c5f
    PUSH 0x615def                       ; 00419d82 | = "disableBodyPartDamage"
    MOV ECX,dword ptr [0x006793d0]      ; 00419d87 | g_CEventListPtr
    PUSH ECX                            ; 00419d8d | g_CEventListInstance
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 00419d8e
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00419d93
    TEST EAX,EAX                        ; 00419d96
    JNZ 0x00419c5f                      ; 00419d98
        ;   XREF to: 00419c5f (CONDITIONAL_JUMP)  ; LAB_00419c5f
    LEA EAX,[ESP + 0x4]                 ; 00419d9e
    PUSH EAX                            ; 00419da2
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0 ; 00419da3
        ;   XREF to: 00427db0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 00419da8
    PUSH 0x41700000                     ; 00419dab
    PUSH 0x41200000                     ; 00419db0
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 00419db5
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)

