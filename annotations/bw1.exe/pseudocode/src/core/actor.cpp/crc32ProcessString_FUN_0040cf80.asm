; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_crc32ProcessString_FUN_0040cf80(uint *crc_state,char *string)
;
; Parameters:
; uint *           Stack[0x4]:4   crc_state
; char *           Stack[0x8]:4   string
;
; XREF[2]:
;   core_actor.cpp_FUN_00409c40 at 00409c4c
;   core_charactr.cpp_FUN_00433c60 at 00433c9c
;
; Called Functions:
;   core_actor.cpp_FUN_0040ce20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040cf80
        ;   Label: core_actor.cpp_crc32ProcessString_FUN_0040cf80
    PUSH ESI                            ; 0040cf81
    MOV EBX,dword ptr [ESP + 0x10]      ; 0040cf82
    MOV AH,byte ptr [EBX]               ; 0040cf86
    MOV ESI,dword ptr [ESP + 0xc]       ; 0040cf88
    TEST AH,AH                          ; 0040cf8c
    JZ 0x0040cfb0                       ; 0040cf8e
        ;   XREF to: 0040cfb0 (CONDITIONAL_JUMP)  ; LAB_0040cfb0
    XOR EAX,EAX                         ; 0040cf90
        ;   Label: LAB_0040cf90
    MOV AL,byte ptr [EBX]               ; 0040cf92
    PUSH EAX                            ; 0040cf94
    PUSH ESI                            ; 0040cf95
    INC EBX                             ; 0040cf96
    CALL core_actor.cpp_FUN_0040ce20    ; 0040cf97
        ;   XREF to: 0040ce20 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040ce20()
    MOV DL,byte ptr [EBX]               ; 0040cf9c
    ADD ESP,0x8                         ; 0040cf9e
    TEST DL,DL                          ; 0040cfa1
    JNZ 0x0040cf90                      ; 0040cfa3
        ;   XREF to: 0040cf90 (CONDITIONAL_JUMP)  ; LAB_0040cf90
    LEA EAX,[EAX]                       ; 0040cfa5
    LEA EDX,[EDX]                       ; 0040cfab
    MOV EBX,EBX                         ; 0040cfae
    POP ESI                             ; 0040cfb0
        ;   Label: LAB_0040cfb0
    POP EBX                             ; 0040cfb1
    RET                                 ; 0040cfb2

