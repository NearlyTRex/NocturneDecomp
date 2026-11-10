; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_icepick_cpp_CIcePick_performMeleeAttack_FUN_004d6230(CIcePick *this_ptr,int bone_index)
;
; Parameters:
; CIcePick *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   bone_index
; Local Variables:
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined        Stack[-0x48]:1  local_48
; undefined        Stack[-0x3c]:1  local_3c
; undefined        Stack[-0x30]:1  local_30
; undefined        Stack[-0x24]:1  local_24
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_icepick.cpp_CIcePick_processMotionEvents_FUN_004d6140 at 004d61ab
;
; Referenced Globals:
;   TerminatedCString s_icepick_punch_wav_005da8ee
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.character_count
;
; Called Functions:
;   core_actor.cpp_FUN_00408d70
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60
;   core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0
;   core_skeleton.cpp_FUN_00546a90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d6230
        ;   Label: core_icepick.cpp_CIcePick_performMeleeAttack_FUN_004d6230
    PUSH ESI                            ; 004d6231
    PUSH EDI                            ; 004d6232
    PUSH EBP                            ; 004d6233
    SUB ESP,0x74                        ; 004d6234
    MOV EBP,dword ptr [ESP + 0x88]      ; 004d6237
    MOV EDX,dword ptr [ESP + 0x8c]      ; 004d623e
    PUSH EDX                            ; 004d6245
    LEA EAX,[EBP + 0x2b4]               ; 004d6246
    PUSH EAX                            ; 004d624c
    LEA ESI,[ESP + 0x50]                ; 004d624d
    LEA EDI,[ESP + 0x44]                ; 004d6251
    CALL core_skeleton.cpp_FUN_00546a90 ; 004d6255
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00546a90()
    ADD ESP,0x8                         ; 004d625a
    LEA EAX,[ESP + 0x3c]                ; 004d625d
    LEA ESI,[ESP + 0x48]                ; 004d6261
    PUSH EAX                            ; 004d6265
    MOVSD ES:EDI,ESI                    ; 004d6266
    MOVSD ES:EDI,ESI                    ; 004d6267
    MOVSD ES:EDI,ESI                    ; 004d6268
    PUSH EBP                            ; 004d6269
    LEA ESI,[ESP + 0x68]                ; 004d626a
    LEA EDI,[ESP + 0x5c]                ; 004d626e
    CALL core_actor.cpp_FUN_00408d70    ; 004d6272
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0x68]                ; 004d6277
    ADD ESP,0x8                         ; 004d627b
    XOR ECX,ECX                         ; 004d627e
    MOVSD ES:EDI,ESI                    ; 004d6280
    MOVSD ES:EDI,ESI                    ; 004d6281
    MOVSD ES:EDI,ESI                    ; 004d6282
    MOV dword ptr [ESP + 0x6c],ECX      ; 004d6283
    XOR EDI,EDI                         ; 004d6287
    XOR ESI,ESI                         ; 004d6289
    MOV EAX,[0x0061b5a8]                ; 004d628b | g_CDemonSetPtr | g_CDemonSetInstance
        ;   Label: LAB_004d628b
    CMP EDI,dword ptr [EAX + 0x14f0a8]  ; 004d6290 | g_CDemonSetInstance.character_count
    JGE 0x004d6322                      ; 004d6296
        ;   XREF to: 004d6322 (CONDITIONAL_JUMP)  ; LAB_004d6322
    MOV EBX,dword ptr [ESI + EAX*0x1 + 0x14f0ac] ; 004d629c
    CMP EBX,EBP                         ; 004d62a3
    JNZ 0x004d62ad                      ; 004d62a5
        ;   XREF to: 004d62ad (CONDITIONAL_JUMP)  ; LAB_004d62ad
    INC EDI                             ; 004d62a7
        ;   Label: LAB_004d62a7
    ADD ESI,0x4                         ; 004d62a8
    JMP 0x004d628b                      ; 004d62ab
        ;   XREF to: 004d628b (UNCONDITIONAL_JUMP)  ; LAB_004d628b
    MOV EAX,ESP                         ; 004d62ad
        ;   Label: LAB_004d62ad
    PUSH EAX                            ; 004d62af
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0 ; 004d62b0
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 004d62b5
    PUSH 0x43020000                     ; 004d62b8
    PUSH 0x42b40000                     ; 004d62bd
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 004d62c2
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x78],EAX      ; 004d62c7
    MOV EDX,0x3f000000                  ; 004d62cb
    FLD float ptr [ESP + 0x78]          ; 004d62d0
    ADD ESP,0x8                         ; 004d62d4
    MOV dword ptr [ESP + 0x2c],EDX      ; 004d62d7
    MOV EDX,ESP                         ; 004d62db
    MOV EAX,0xffffffff                  ; 004d62dd
    PUSH EDX                            ; 004d62e2
    MOV dword ptr [ESP + 0x4],EAX       ; 004d62e3
    MOV dword ptr [ESP + 0x38],EBP      ; 004d62e7
    PUSH 0x3f800000                     ; 004d62eb
    LEA EDX,[ESP + 0x5c]                ; 004d62f0
    MOV dword ptr [ESP + 0x40],EBP      ; 004d62f4
    PUSH EDX                            ; 004d62f8
    FSTP float ptr [ESP + 0x10]         ; 004d62f9
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004d62fd
    PUSH EBX                            ; 004d6303
    CALL dword ptr [EAX + 0x108]        ; 004d6304
    ADD ESP,0x10                        ; 004d630a
    TEST EAX,EAX                        ; 004d630d
    JZ 0x004d62a7                       ; 004d630f
        ;   XREF to: 004d62a7 (CONDITIONAL_JUMP)  ; LAB_004d62a7
    MOV dword ptr [ESP + 0x6c],0x1      ; 004d6311
    INC EDI                             ; 004d6319
    ADD ESI,0x4                         ; 004d631a
    JMP 0x004d628b                      ; 004d631d
        ;   XREF to: 004d628b (UNCONDITIONAL_JUMP)  ; LAB_004d628b
    CMP dword ptr [ESP + 0x6c],0x0      ; 004d6322
        ;   Label: LAB_004d6322
    JNZ 0x004d6331                      ; 004d6327
        ;   XREF to: 004d6331 (CONDITIONAL_JUMP)  ; LAB_004d6331
    ADD ESP,0x74                        ; 004d6329
    POP EBP                             ; 004d632c
    POP EDI                             ; 004d632d
    POP ESI                             ; 004d632e
    POP EBX                             ; 004d632f
    RET                                 ; 004d6330
    PUSH 0x5da8ee                       ; 004d6331 | = "icepick-punch?.wav"
        ;   Label: LAB_004d6331
    MOV EAX,dword ptr [EBP + 0x2b0]     ; 004d6336
    PUSH EBP                            ; 004d633c
    CALL dword ptr [EAX + 0x34]         ; 004d633d
    ADD ESP,0x8                         ; 004d6340
    ADD ESP,0x74                        ; 004d6343
    POP EBP                             ; 004d6346
    POP EDI                             ; 004d6347
    POP ESI                             ; 004d6348
    POP EBX                             ; 004d6349
    RET                                 ; 004d634a

