; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_boneguy_cpp_CBoneGuy_beginRecombine_FUN_0041a310(CBoneGuy *this_ptr)
;
; Parameters:
; CBoneGuy *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x24]:1  local_24
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_boneguy.cpp_FUN_00418a00 at 00418ac4
;
; Referenced Globals:
;   TerminatedCString s_boneguy_comeback_wav_00579561
;
; Called Functions:
;   core_xform.cpp_eulerToQuaternion_FUN_0055d610
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041a310
        ;   Label: core_boneguy.cpp_CBoneGuy_beginRecombine_FUN_0041a310
    PUSH ESI                            ; 0041a311
    PUSH EDI                            ; 0041a312
    PUSH EBP                            ; 0041a313
    SUB ESP,0x14                        ; 0041a314
    MOV EAX,dword ptr [ESP + 0x28]      ; 0041a317
    XOR EDX,EDX                         ; 0041a31b
    MOV ECX,dword ptr [EAX + 0xbda0]    ; 0041a31d
    MOV dword ptr [ESP + 0x10],EDX      ; 0041a323
    TEST ECX,ECX                        ; 0041a327
    JLE 0x0041a3a8                      ; 0041a329
        ;   XREF to: 0041a3a8 (CONDITIONAL_JUMP)  ; LAB_0041a3a8
    LEA EBP,[EAX + 0xbddc]              ; 0041a32f
    MOV EBX,EAX                         ; 0041a335
    MOV EAX,dword ptr [EBX + 0xbde8]    ; 0041a337
        ;   Label: LAB_0041a337
    ADD EAX,0x30                        ; 0041a33d
    PUSH EAX                            ; 0041a340
    LEA ESI,[ESP + 0x4]                 ; 0041a341
    CALL core_xform.cpp_eulerToQuaternion_FUN_0055d610 ; 0041a345
        ;   XREF to: 0055d610 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_eulerToQuaternion_FUN_0055d610()
    LEA ESI,[ESP + 0x4]                 ; 0041a34a
    LEA EDI,[EBX + 0xbdbc]              ; 0041a34e
    ADD ESP,0x4                         ; 0041a354
    MOVSD ES:EDI,ESI                    ; 0041a357
    MOVSD ES:EDI,ESI                    ; 0041a358
    MOVSD ES:EDI,ESI                    ; 0041a359
    MOVSD ES:EDI,ESI                    ; 0041a35a
    MOV EAX,dword ptr [EBX + 0xbde8]    ; 0041a35b
    MOV dword ptr [EAX + 0xf08],0x0     ; 0041a361
    MOV EAX,dword ptr [EBX + 0xbde8]    ; 0041a36b
    ADD EAX,0x20                        ; 0041a371
    CMP EBP,EAX                         ; 0041a374
    JZ 0x0041a389                       ; 0041a376
        ;   XREF to: 0041a389 (CONDITIONAL_JUMP)  ; LAB_0041a389
    MOV EDX,dword ptr [EAX]             ; 0041a378
    MOV dword ptr [EBP],EDX             ; 0041a37a
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041a37d
    MOV dword ptr [EBP + 0x4],EDX       ; 0041a380
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041a383
    MOV dword ptr [EBP + 0x8],EDX       ; 0041a386
    MOV ESI,dword ptr [ESP + 0x10]      ; 0041a389
        ;   Label: LAB_0041a389
    INC ESI                             ; 0041a38d
    MOV dword ptr [ESP + 0x10],ESI      ; 0041a38e
    MOV EAX,ESI                         ; 0041a392
    MOV ESI,dword ptr [ESP + 0x28]      ; 0041a394
    ADD EBP,0x48                        ; 0041a398
    MOV EDI,dword ptr [ESI + 0xbda0]    ; 0041a39b
    ADD EBX,0x48                        ; 0041a3a1
    CMP EAX,EDI                         ; 0041a3a4
    JL 0x0041a337                       ; 0041a3a6
        ;   XREF to: 0041a337 (CONDITIONAL_JUMP)  ; LAB_0041a337
    MOV EAX,dword ptr [ESP + 0x28]      ; 0041a3a8
        ;   Label: LAB_0041a3a8
    PUSH 0x579561                       ; 0041a3ac | = "boneguy-comeback.wav"
    MOV dword ptr [EAX + 0xc344],0x2    ; 0041a3b1
    MOV EBP,dword ptr [ESP + 0x2c]      ; 0041a3bb
    MOV dword ptr [EAX + 0xc348],0x0    ; 0041a3bf
    PUSH EBP                            ; 0041a3c9
    MOV EAX,dword ptr [EAX + 0x14c]     ; 0041a3ca
    CALL dword ptr [EAX + 0x24]         ; 0041a3d0
    ADD ESP,0x8                         ; 0041a3d3
    ADD ESP,0x14                        ; 0041a3d6
    POP EBP                             ; 0041a3d9
    POP EDI                             ; 0041a3da
    POP ESI                             ; 0041a3db
    POP EBX                             ; 0041a3dc
    RET                                 ; 0041a3dd

