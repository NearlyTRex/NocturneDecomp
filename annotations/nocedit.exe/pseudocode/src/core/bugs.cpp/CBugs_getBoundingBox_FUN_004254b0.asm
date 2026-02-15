; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoundingBox3D * __cdecl core_bugs_cpp_CBugs_getBoundingBox_FUN_004254b0(CBugs *this_ptr,CBoundingBox3D *out_box)
;
; Parameters:
; CBugs *          Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004254b0
        ;   Label: core_bugs.cpp_CBugs_getBoundingBox_FUN_004254b0
    MOV ECX,dword ptr [ESP + 0xc]       ; 004254b1
    MOV EAX,dword ptr [ESP + 0x8]       ; 004254b5
    ADD EAX,0x199cc                     ; 004254b9
    MOV EDX,dword ptr [EAX]             ; 004254be
    LEA EBX,[EAX + 0x4]                 ; 004254c0
    MOV dword ptr [ECX],EDX             ; 004254c3
    LEA EDX,[ECX + 0x4]                 ; 004254c5
    MOV EBX,dword ptr [EBX]             ; 004254c8
    MOV dword ptr [EDX],EBX             ; 004254ca
    LEA EBX,[EAX + 0x8]                 ; 004254cc
    MOV EBX,dword ptr [EBX]             ; 004254cf
    MOV dword ptr [EDX + 0x4],EBX       ; 004254d1
    MOV EBX,dword ptr [EAX + 0xc]       ; 004254d4
    ADD EAX,0xc                         ; 004254d7
    MOV dword ptr [EDX + 0x8],EBX       ; 004254da
    LEA EBX,[EAX + 0x4]                 ; 004254dd
    MOV EBX,dword ptr [EBX]             ; 004254e0
    MOV dword ptr [EDX + 0xc],EBX       ; 004254e2
    MOV EAX,dword ptr [EAX + 0x8]       ; 004254e5
    MOV dword ptr [EDX + 0x10],EAX      ; 004254e8
    MOV EAX,ECX                         ; 004254eb
    POP EBX                             ; 004254ed
    RET                                 ; 004254ee

